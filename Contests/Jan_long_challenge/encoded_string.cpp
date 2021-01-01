#include <iostream>
#include <string>

using namespace std;

char str_decode(string s){
    char ans;
    int index = (s[0] - '0') * 8 + (s[1] - '0') * 4 + (s[2] - '0') * 2 + (s[3] - '0') * 1;
    ans = 'a' + index;
    return ans;
}

int main(){
    int t;
    string s;
    cin >> t;
    int s_len;
    while (t--){
        cin >> s_len;
        cin >> s;
        for (int i = 0; i < s_len; i+= 4){
            cout << str_decode(s.substr(i, 4));
        }
        cout << "\n";
    }

    return 0;
}
