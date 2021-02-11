#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    int n, q;
    while(t--){
        cin >> n;
        vector <long long> arr(n);
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }
        cin >> q;
        string l;
        int r;
        int ll;
        long long x;
        while (q--){
            cin >> l;
            if (l[0] == 'U'){
                for (int i = 0; i < n; i++){cout << arr[i] << " ";}
                cout << endl;
                continue;
            }
            else {
                ll = stoi(l);
                cin >> r >> x;
                for (int i = ll - 1; i <= r - 1; i++){arr[i] += x;}
            }
        }
    }
    return 0;
}
