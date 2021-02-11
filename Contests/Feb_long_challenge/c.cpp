#include <bits/stdc++.h>

using namespace std;

int to_hour(string time, string am_pm){
    int ans = stoi(time.substr(0, 2));
    if (am_pm[0] == 'A' && ans == 12){
        ans = 0;
    }
    if (am_pm[0] == 'P' && ans != 12){
        ans += 12;
    }
    return ans;
}

int to_minute(string time){
    return stoi(time.substr(3, 2));
}

int compare_time(int h1, int h2, int min1, int min2){
    if (h2 > h1){
        return 1;
    }
    else if (h2 == h1 && min2 >= min1){return 1;}
    return 0;
}

int main(){
    int t;
    cin >> t;
    int n;
    while (t--){
        string p_time, p_am_pm;
        cin >> p_time >> p_am_pm;
        int p_hrs, p_min;
        p_hrs = to_hour(p_time, p_am_pm);
        p_min = to_minute(p_time);

        cin >> n;
        vector <int> ans (n, 0);
        int i = 0;
        while (n--){
            string t1, ap1, t2, ap2;
            int t1_hr, t1_min, t2_hr, t2_min;
            cin >> t1 >> ap1 >> t2 >> ap2;
            t1_hr = to_hour(t1, ap1);
            t2_hr = to_hour(t2, ap2);
            t1_min = to_minute(t1);
            t2_min = to_minute(t2);
            int flag1, flag2;
            flag1 = compare_time(t1_hr, p_hrs, t1_min, p_min);
            flag2 = compare_time(p_hrs, t2_hr, p_min, t2_min);
            if (flag1 && flag2){ans[i] = 1;}
            ++i;
        }
        for (int i = 0; i < (int)ans.size(); i++){cout << ans[i];}
        cout << endl;
    }

    return 0;
}
