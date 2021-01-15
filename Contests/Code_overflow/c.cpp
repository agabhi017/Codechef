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
        int index = 0;
        while (index < n){
            while (arr[index] == arr[index + 1] && index < n - 1){
                arr[index] -= 1;
                arr[index + 1] -= 1;
                ++index;
            }
            ++index;
        }
        vector <int> v;
        for (int i = i; i < n; i++){
            if (arr[i] != arr[i - 1]){v.push_back(arr[i]);}
        }
        cout << v.size() * 100 << endl;
    }
    return 0;
}
