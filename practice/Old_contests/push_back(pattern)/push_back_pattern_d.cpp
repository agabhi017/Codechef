#include <iostream>

using namespace std;

int main(){
    int n, k;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> k;
        for (int j = 0; j <=k; j++){
            for (int p = 0; p <= j; p++){
                if (p == j){cout << p;}
                else {cout << '*';}
            }
            cout << "\n";
        }
        cout << "\n";
    }
    return 0;
}
