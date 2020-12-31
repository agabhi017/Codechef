#include <iostream>

using namespace std;

int main(){
    int n, k;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> k;
        for (int j = 0; j < k; j++){
            for (int p = 0; p < k-j; p++){
                if ((j + k)% 2 == 0){cout << k - p - j;}
                else {cout << p + 1;}
            }
            cout << "\n";
        }
        cout << "\n";
    }
    return 0;
}
