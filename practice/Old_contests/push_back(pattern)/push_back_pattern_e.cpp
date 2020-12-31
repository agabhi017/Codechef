#include <iostream>

using namespace std;

int main(){
    int n, k;
    cin >> n;
    int offset = 1;
    int ans;
    for (int i = 0; i < n; i++){
        cin >> k;
        offset = 1;
        for (int j = 0; j < k; j++){
            for (int p = 0; p < k; p++){
                ans = offset + p;
                if (ans > k){cout << ans - k;}
                else {cout << ans;}
            }
            ++offset;
            cout << "\n";
        }
        cout << "\n";
    }
    return 0;
}
