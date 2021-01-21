#include <bits/stdc++.h>

using namespace std;

struct Node {
    Node* parent;
    int parent_rel;
    int key;
    Node(){
        parent = nullptr;
        parent_rel = -1;
    }
};

int main(){
    int n , cost;
    cin >> n >> cost;
    int a, b;
    vector <Node> node_list(n, Node());
    for (int i = 0; i < n - 1; i++){
        cin >> a >> b;
        node_list[b - 1].key = b;
        node_list[a - 1].key = a;
        if (node_list[b - 1].parent != nullptr){
            node_list[a - 1].parent = &node_list[b - 1];
            node_list[a - 1].parent_rel = 1;
        }
        else {
            node_list[b - 1].parent = &node_list[a - 1];
        }
    }
    int q;
    cin >> q;
    while(q--){
        cin >> a >> b;
        map <int, int> path;
        vector <int> cost_a;
        vector <int> cost_b;
        vector <int> path_a;
        vector <int> path_b;

        int parent_key;
        Node child_node_a = node_list[a - 1];
        Node* parent_ptr_a = node_list[a - 1].parent;
        while (parent_ptr_a != nullptr){
            parent_key = parent_ptr_a->key;
            path[parent_key] = 1;
            path_a.push_back(parent_key);
            cost_a.push_back(child_node_a.parent_rel);
            child_node_a = *parent_ptr_a;
            parent_ptr_a = parent_ptr_a->parent;
        }

        Node child_node_b = node_list[b - 1];
        Node* parent_ptr_b = node_list[b - 1].parent;
        while (parent_ptr_b != nullptr && path[parent_ptr_b->key] != 1){
            path_b.push_back(parent_ptr_b->key);
            cost_b.push_back(child_node_b.parent_rel);
            child_node_b = *parent_ptr_b;
            parent_ptr_b = parent_ptr_b->parent;
        }

        if (parent_ptr_b != nullptr){
            path_b.push_back(parent_ptr_b->key);
            cost_b.push_back(child_node_b.parent_rel);
        }

        int index = (int)path_a.size() - 1;
        while (parent_ptr_b != nullptr && parent_ptr_b->key != path_a[index] && index >= 0){
            path_a.pop_back();
            cost_a.pop_back();
            --index;
        }

        for (int i = (int)path_b.size() - 1; i >= 0; i--){
            path_a.push_back(path_b[i]);
            cost_a.push_back(-1 * cost_b[i]);
        }

        int total_cost = 0;
        for (int i = 0; i < (int)cost_a.size(); i++){
            if (cost_a[i] < 0){total_cost += cost;}
        }
        cout << total_cost << endl;
    }

    return 0;
}
