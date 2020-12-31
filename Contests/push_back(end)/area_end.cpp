#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, k;
    cin >> n;
    int min_prod, max_prod;
    for (int  i = 0; i < n; i++){
        cin >> k;
        int arr[k];
        min_prod = 1;
        max_prod = 1;
        for (int j = 0; j < k; j++){
            cin >> arr[j];
        }
        sort(arr, arr + k);
        min_prod = arr[0] * arr[1];
        max_prod = arr[k -1] * arr[k - 2];
        cout << max_prod << " " << min_prod << endl;

    }
    return 0;
}
