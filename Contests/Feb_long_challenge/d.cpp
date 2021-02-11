#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    int n;
    while (t--){
        cin >> n;
        vector <int> wghts(n);
        map <int, int> init_pos;
        for (int i = 0; i < n; i++){
            cin >> wghts[i];
            init_pos[wghts[i]] = i;
        }
        int jump;
        map <int, int> frog_jump;
        for (int i = 0; i < n; i++){
            cin >> jump;
            frog_jump[wghts[i]] = jump;
        }
        sort(wghts.begin(), wghts.end());
        int curr_pos = init_pos[wghts[0]];
        int steps = 0;
        for (int i = 1; i < n; i++){
            while (init_pos[wghts[i]] <= curr_pos){
                init_pos[wghts[i]] += frog_jump[wghts[i]];
                ++steps;
            }
            curr_pos = init_pos[wghts[i]];
        }
        cout << steps << endl;
    }
    return 0;
}
