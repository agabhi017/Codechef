
#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n, q;
        cin >> n >> q;
        vector <long long> arr(n);
        vector <long long> arr_sum(n, 0);
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }
        arr_sum[0] = arr[0];
        for (int i = 1; i < n; i++){
            arr_sum[i]+= arr[i] + arr_sum[i - 1];
        }
        long long query, index;
        for (int i = 0; i < q; i++){
            cin >> query;
            auto it = find(arr.begin(), arr.end(), query);
            index = it - arr.begin();
            if (arr_sum[index] > arr_sum[n - 1] - arr_sum[index]){
                cout << arr_sum[n - 1] - arr_sum[index - 1] << endl;
            }
            else {cout << arr_sum[index] << endl;}
        }
    }
    return 0;
}
