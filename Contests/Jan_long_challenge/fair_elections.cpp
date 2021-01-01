#include <iostream>
#include <algorithm>

using namespace std;

int sum_array(int arr[], int n){
    int summ = 0;
    for (int i = 0; i < n; i++){
        summ+= arr[i];
    }
    return summ;
}

int main(){
    int t;
    int n, m;
    cin >> t;
    int swaps;
    int temp;
    while (t--){
        cin >> n >> m;
        int arr_n[n], arr_m[m];
        swaps = 0;
        for (int i = 0; i < n; i++){
            cin >> arr_n[i];
        }
        for (int i = 0; i < m; i++){
            cin >> arr_m[i];
        }
        sort(arr_n, arr_n + n);
        sort(arr_m, arr_m + m);
        while (sum_array(arr_n, n) <= sum_array(arr_m, m)){
            temp = arr_n[0];
            arr_n[0] = arr_m[m - 1];
            arr_m[m - 1] = temp;
            sort(arr_n, arr_n + n);
            sort(arr_m, arr_m + m);
            ++swaps;
            if (swaps > n){swaps = -1; break;}
        }
        cout << swaps << endl;
    }
    return 0;
}
