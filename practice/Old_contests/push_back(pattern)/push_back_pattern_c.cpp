
#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int k;
    for (int i = 0; i < n; i++){
        cin >> k;
        for (int j = 0; j < k; j++){
            for (int p = 0; p < k; p++){
                if (p >= j){cout << k - p;}
                else {cout << '*';}
            }
            cout << "\n";
        }
        cout << "\n";
    }
    return 0;

}
