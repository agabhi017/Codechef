#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    int s_len;
    int summ;
    for (int i = 0; i < n; i ++){
        cin >> s;
        s_len = s.length();
        summ = 0;
        for (int j = 0; j < s_len; j++){
            summ += ((int)s[j]);
        }
        if (stoi(s) % summ == 0){cout << "YES" << endl;}
        else {cout << "NO" << endl;}
    }
    return 0;

}
