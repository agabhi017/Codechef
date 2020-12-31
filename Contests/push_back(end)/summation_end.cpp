#include <iostream>

using namespace std;

int main(){
    int n, k;
    cin >> n;
    int summ = 0;
    int number;
    for (int  i = 0; i < n; i++){
        cin >> k;
        summ = 0;
        for (int j = 0; j < k; j++){
            cin >> number;
            if (number %6 == 0){summ += number;}
            summ += (number) % 6;
        }
        cout << summ << endl;
    }
    return 0;
}
