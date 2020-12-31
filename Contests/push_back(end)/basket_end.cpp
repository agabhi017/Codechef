#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int t, n, m;
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> n >> m;
        int arr[n + m];
        for (int j = 0; j < n + m; j++){
            cin >> arr[j];
        }
        sort(arr, arr + n + m);
        if (arr[0] != arr[1]){cout << arr[0] << " ";}
        for (int j = 1; j < n + m - 1; j++){
            if (arr[j] != arr[j - 1] && arr[j] != arr[j + 1]){cout << arr[j] << " ";}
        }
        if (arr[n+m-1] != arr[n+m-2]){cout << arr[n+m-1] << " ";}
        cout << "\n";
    }
    return 0;
}
