#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    string s;
    while(t--){
        cin >> s;
        string ans = "NO";
        int num_count = 0;
        if (s.length() == 10){
            if (s[0] != '0'){
                for (int i = 0; i < 10; i++){
                    if (s[i] - '0' >= 0 && s[i] - '0' <= 9){++num_count;}
                }
                if (num_count == 10){ans = "YES";}
            }
        }
        cout << ans << endl;
    }
    return 0;
}
