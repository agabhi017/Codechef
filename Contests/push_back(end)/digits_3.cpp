#include <iostream>
#include <string>


using namespace std;

int main(){
    std::ios::sync_with_stdio(false);
    int n;
    cin >> n;
    string s;
    int num;
    int s_len;
    int summ;
    for (int i = 0; i < n; i ++){
        cin >> num;
        s = to_string(num);
        s_len = s.length();
        summ = 0;
        for (int j = 0; j < s_len; j++){
            summ += (s[j] - '0');
        }
        if (num % summ == 0){cout << "Yes" << endl;}
        else {cout << "No" << endl;}
    }
    return 0;

}
