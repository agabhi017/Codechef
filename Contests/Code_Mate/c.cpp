#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n, m;
        cin >> n >> m;
        int arr[n] = {10};
        fill_n(arr, n, 10);
        for (int i = 0; i < m; i++){
            int n1, n2, k;
            cin >> n1 >> n2 >> k;
            for (int p = n1 - 1; p < n2; p++){
                arr[p] *= k;
            }
        }
        float max_sum = 0;
        for (int i = 0; i < n; i++){
            max_sum += arr[i];
        }
        cout << floor(max_sum / (float)n);

    }

    return 0;
}
