#include <iostream>

using namespace std;

int main(){
    int n, k;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> k;
        for (int j = 0; j < k; j++){
            for (int p = 0; p <= j; p++){
                if (j == k - 1 || p == 0 || p == j){cout << '*';}
                else {cout << " ";}
            }
            cout << "\n";
        }
        cout << "\n";
    }
    return 0;
}
