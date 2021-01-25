#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    string s;
    int small_c, cap_c, dig, chars, s_len;
    while (t--){
        cin >> s;
        small_c = 0;
        cap_c = 0;
        dig = 0;
        chars = 0;
        s_len = s.length();
        for (int i = 0; i < s_len; i++){
            if (s[i] >= 'a' && s[i] <= 'z'){small_c++; }
            if (i != 0 && i != s_len - 1 && s[i] >= 'A' && s[i] <= 'Z'){cap_c ++;}
            if (i != 0 && i != s_len - 1 && s[i] >= '0' && s[i] <= '9'){dig++; }
            if (i != 0 && i != s_len - 1 && (s[i] == '@' || s[i] == '#' || s[i] == '%' || s[i] == '&' || s[i] == '?')){chars++;}
        }

        if (s_len >= 10 && small_c > 0 && cap_c > 0 && dig > 0 && chars > 0){cout << "YES" << endl;}
        else {cout << "NO" << endl;}

    }
    return 0;
}
