#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    long long l, r;
    cin >> t;
    while (t--){
        cin >> l >> r;
        long long ans = (r - l + 1) * 2 - 1;
        cout << ans << endl;
    }
    return 0;
}
