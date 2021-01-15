#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    int t;
    cin >> t;
    int zeb_x[t];
    int spit_x[t];
    for (int i = 0; i < t; i++){cin >> zeb_x[i] >> spit_x[i];}
    int counter = 0;
    for (int i = 0; i < t; i++){
        int dis = zeb_x[i] + spit_x[i];
        for (int j = 0; j < t; j++){
            int dis_j = zeb_x[j] + spit_x[j];
            if (dis == zeb_x[j] && i != j){
                if (dis_j == zeb_x[i]){++counter; break;}
            }
        }
        if (counter > 0){break;}
    }
    if (counter > 0){cout << "YES";}
    else {cout << "NO";}

    return 0;
}
