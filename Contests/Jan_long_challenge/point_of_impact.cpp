#include <iostream>
#include <array>

using namespace std;

int check_corners(int x, int y, int n){
    int ans = 1; //1 indicates not a corner coordinate
    if ((x == 0 && y == 0) || (x == 0 && y == n) || (x == n && y == n) || (x == n && y == 0)){ans = 0;}
    else {ans = 1;}
    return ans;
}

int point_impact_x(int x_prev, int y_prev, int slope, int first_collision, int n){
    int ans;
    int c;
    int x1, x2;
    c = y_prev - slope * x_prev;
    x1 = (0 - c) / slope;
    x2 = (n - c) / slope;
    if (first_collision){
        if (x1 > x_prev){ans = min(max(x1, 0), n);}
        else {ans = min(max(x2, 0), n);}
    }
    else if (y_prev == 0 || y_prev == n){
        if (x1 != x_prev){ans = min(max(x1, 0), n);}
        else {ans = min(max(x2, 0), n);}
    }
    else {
        if (x1 >= 0 && x1 <= n){ans = x1;}
        else {ans = x2;}
    }
    return ans;
}

int point_impact_y(int x_prev, int y_prev, int slope, int first_collision, int n){
    int ans;
    int c;
    int y1, y2;
    c = y_prev - slope * x_prev;
    y1 = slope * 0 + c;
    y2 = slope * n + c;
    if (first_collision){
        if (y1 > y_prev){ans = min(max(y1, 0), n);}
        else {ans = min(max(y2, 0), n);}
    }
    else if (x_prev == 0 || x_prev == n){
        if (y1 != y_prev){ans = min(max(y1, 0), n);}
        else {ans = min(max(y2, 0), n);}
    }
    else {
        if (y1 >= 0 && y1 <= n){ans = y1;}
        else {ans = y2;}
    }
    return ans;
}

int main(){
    int t;
    int n, k, x, y;
    scanf("%d", &t);
    while (t--){
        scanf("%d %d %d %d", &n, &k, &x, &y);
        //cin >> n >> k >> x >> y;
        int slope = 1;
        int first_collision = 1;
        int corner_check = 1;
        int x_arr[4] = {x}, y_arr[4] = {y};

        if (x != n && y != n){

            x_arr[0] = point_impact_x(x, y, slope, first_collision, n);
            y_arr[0] = point_impact_y(x, y, slope, first_collision, n);
            corner_check = check_corners(x_arr[0], y_arr[0], n);
            slope *= -1;
            first_collision *= 0;
            //cout << 0 << " " << x_arr[0] << " " << y_arr[0] << endl;

            int index = 1;
            if (corner_check){
                while (index < 4){
                    x_arr[index] = point_impact_x(x_arr[index - 1], y_arr[index - 1], slope, first_collision, n);
                    y_arr[index] = point_impact_y(x_arr[index - 1], y_arr[index - 1], slope, first_collision, n);;
                    slope *= -1;
                    first_collision *= 0;
                    //cout << index << " " << x_arr[index] << " " << y_arr[index] << endl;
                    ++index;
                }
            }
            //else {x_arr[4] = {x_arr[0]}; y_arr[4] = {y_arr[0]};}
            else {fill(x_arr, x_arr + 4, x_arr[0]); fill(y_arr, y_arr + 4, y_arr[0]);}
        }
        printf("%d %d \n", x_arr[(k - 1) % 4], y_arr[(k - 1) % 4]);
        //cout << x_impact << " " << y_impact << endl;
    }
    return 0;
}
