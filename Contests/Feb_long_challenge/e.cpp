#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, n;
    cin >> t;
    while (t--){
        cin >> n;
        vector <string> arr(n);
        map <string, int> funny;
        set <char> funny_start;
        string s;
        for (int i = 0; i < n; i++){
            cin >> arr[i];
            funny[arr[i]] = 1;
            s = arr[i];
            funny_start.insert(s[0]);
        }
        map <string, int> demand;
        char temp_char;
        string temp, a, b;
        for (int i = 0; i < n; i++){
            temp = arr[i];
            a = temp[0];
            for (auto itr = funny_start.begin(); itr != funny_start.end(); itr++){
                temp[0] = *itr;
                if (funny[temp] != 1){
                    b = temp[0];
                    demand[a + b] += 1;
                }
            }
        }
        int ans = 0;
        char a_ = 'a', b_ = 'a';
        string t1, t2;
        for (int i = 0; i < 26; i++){
            b_ = 'a';
            for (int j = 0; j < 26; j++){
                t1 = "";
                t2 = "";
                t1 += a_;
                t1 += b_;
                t2 += b_;
                t2 += a_;
                ans += demand[t1]*demand[t2];
                b_ += 1;
            }
            a_ += 1;
        }
        cout << ans << endl;
    }
    return 0;
}
