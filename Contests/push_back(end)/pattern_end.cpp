#include <iostream>

using namespace std;

int main(){
    int n,k;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> k;
        for (int j = 0; j < k; j++){
            for (int p = 0; p < 2*k - 1; p++){
                if (p == k - 1 + j || j == k - 1 || p + j == k - 1){cout << "*";}
                else {cout << " ";}

            }
            cout << "\n";
        }
        cout << "\n";
    }
    return 0;
}
