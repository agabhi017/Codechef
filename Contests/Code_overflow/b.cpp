#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int num = arr[0];
        int index = 1;
        while(index < n){
            num = (num ^ arr[index]);
            ++index;
        }
        cout << num << endl;
    }

}
