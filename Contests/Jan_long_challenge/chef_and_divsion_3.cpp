#include <iostream>

using namespace std;

int main(){
    int t;
    int n, k, d;
    cin >> t;
    int total_problems;
    int per_setter;
    while (t--){
        cin >> n >> k >> d;
        total_problems = 0;
        while(n--){
            cin >> per_setter;
            total_problems += per_setter;
        }
        if (k > total_problems){cout << 0 << endl;}
        else {cout << min(total_problems/k, d) << endl;}
    }
    return 0;
}
