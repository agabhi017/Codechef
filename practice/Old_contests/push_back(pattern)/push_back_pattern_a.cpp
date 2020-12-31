#include <iostream>

using namespace std;

int main(){
    int n, k;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> k;
        for (int j = 0; j < k; j++){
            for (int p = 0; p < 2 * k; p++){
                if ((p + 1) % 2 == 1){cout << (p + 2)/2;}
                else {cout << j + 1;}
            }
            cout << "\n";
        }
        cout << "\n";
    }
    return 0;

}
