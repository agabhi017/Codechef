#include <iostream>

using namespace std;

int main(){
    int n, k;
    cin >> n;
    long long summ;
    for (int i = 0; i < n; i ++){
        cin >> k;
        summ = 0;
        for (int j = 1; j < k; j ++){
            summ+= j * j;
        }
        cout << summ << endl;
    }
    return 0;
}
