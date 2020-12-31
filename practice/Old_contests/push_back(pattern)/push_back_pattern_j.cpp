#include <iostream>

using namespace std;


int main(){
    int n, k;
    cin >> n;
    int ans = 0;
    for (int i = 0; i < n; i++){
        cin >> k;
        for (int j = 0; j < k; j++){
            ans = (j + 1)*(j + 2)/2;
            for (int p = 0; p <= j; p++){
                cout << ans;
                --ans;
            }
            cout << "\n";
        }
        cout << "\n";
    }
    return 0;
}
