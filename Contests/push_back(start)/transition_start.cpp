#include <iostream>

using namespace std;

int main(){
    int n, k;
    cin >> n;
    int summ = 0;
    for (int  i = 0; i < n; i++){
        cin >> k;
        int arr[2 * k - 1] = {0};
        arr[0] = 1;
        arr[2*k - 2] = 1;
        for (int j = 1; j < k; j++){
            arr[j] = j + 1;
            arr[2 * k - j - 2] = j + 1;
        }
        summ = 0;
        for (int j = 0; j < 2*k - 1; j++){
            summ+= arr[j] * arr[j];
        }
        cout << summ << endl;
    }
    return 0;
}
