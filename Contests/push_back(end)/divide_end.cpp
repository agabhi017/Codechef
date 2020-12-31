#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    int s_len;
    int s_count = 0;
    for (int i = 0; i < n; i++){
        cin >> s;
        s_len = s.length();
        for (int j = 0; j < s_len; j++){
            if ((s[j] - '0')%2 ==0){
                ++s_count;
                break;
            }
        }
        if (s_count > 0){cout << 1 << endl;}
        else {cout << 0 << endl;}
    }
    return 0;
}
