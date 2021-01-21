#include <bits/stdc++.h>

using namespace std;

struct Node {
    Node* parent = nullptr;
    int parent_rel = -1;
    int key;
};


int main(){
    int n , cost;
    cin >> n >> cost;
    int a, b;
    vector <Node> node_list(n);
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
    for (int i = 0; i < q; i++){
        cin >> a >> b;
        map <int, int> path;
        vector <int> cost_a;
        vector <int> cost_b;
        vector <int> path_a;
        vector <int> path_b;
        int parent_key;
        Node* parent_ptr_a = node_list[b - 1].parent;
        while (parent_ptr_a != nullptr){
            parent_key = parent_ptr_a->key;
            path[parent_key] = 1;
            path_a.push_back(parent_key);
            cost_a.push_back(parent_ptr_a->parent_rel);
            parent_ptr_a = parent_ptr_a->parent;
        }
        Node* parent_ptr_b = node_list[a - 1].parent;
        while (path[parent_ptr_b->key] != 1){
            path_b.push_back(parent_ptr_b->key);
            cost_b.push_back(parent_ptr_b->parent_rel);
            parent_ptr_b = parent_ptr_b->parent;
        }
        int index = 0;
        while (parent_ptr_b->key != path_a[index]){
            path_b.push_back(path_a[index]);
            cost_b.push_back(-1 * cost_a[index]);
            ++index;
        }
        path_b.push_back(path_a[index]);
        cost_b.push_back(cost_a[index]);
        for (auto i = 0; i < path_b.size(); i++){cout << path_b[i] << " " << cost_b[i] << endl;}
    }

    return 0;
}
