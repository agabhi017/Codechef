#include <iostream>
#include <algorithm>

using namespace std;

int main (){
    int t;
    int n, k;
    cin >> t;
    while (t--){
        cin >> n >> k;
        int boxes[n];
        for (int i = 0; i < n; i++){cin >> boxes[i];}
        sort(boxes, boxes + n);
        for (int i = 0; i < n; i++){cout << boxes[i] << endl;;}
        int index = 0;
        int w1 = 0, w2 = 0, c1 = 0, c2 = 0;
        while (index < n){
            if (w1 <= w2){
                if (w1 < k){
                    w1 += boxes[n - index - 1];
                    ++c1;
                    ++index;
                    cout << "w1 " << w1 << endl;
                }
                if (w2 < k && index < n){
                    w2 += boxes[n - index - 1];
                    ++c2;
                    ++index;
                    cout << "w2 " << w2 << endl;
                }
            }
            else {
                if (w2 < k){
                    w2 += boxes[n - index - 1];
                    ++c2;
                    ++index;
                    cout << "w2 " << w2 << endl;
                }
                if (w1 < k && index < n){
                    w1 += boxes[n - index - 1];
                    ++c1;
                    ++index;
                    cout << "w1 " << w1 << endl;
                }
            }
            if (w1 >= k && w2 >= k){break;}
        }
        if (w1 >= k && w2 >= k){cout << c1 + c2 << endl;}
        else {cout << -1 << endl;}
    }
    return 0;
}
