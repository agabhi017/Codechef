#include <bits/stdc++.h>

using namespace std;

const long long MODD = 998244353;
const int MAXN = (int)1e5 + 5;

long long inv[MAXN], fac_inv[MAXN], fac[MAXN];

void ncr_initialize(){
    long long i;
    inv[1] = 1;
    for(i = 2; i <= MAXN - 2; i++){inv[i] = (MODD - MODD/i) * inv[MODD % i] % MODD;}

    fac[0] = fac[1] = 1;
    for(i = 2; i <= MAXN - 2; i++){fac[i] = i * fac[i - 1] % MODD;}

    fac_inv[0] = fac_inv[1] = 1;
    for(i = 2; i <= MAXN - 2; i++){fac_inv[i] = inv[i] * fac_inv[i - 1] % MODD;}
}

long long ncr(long long a, long long b){
    if(a < b) return 0;
    return (fac[a] * fac_inv[b] % MODD) * fac_inv[a - b] % MODD;
}

const int MAX_BITS = 31;

int main(){
    ncr_initialize();
    int n, q, m;
    cin >> n;
    vector <long long> arr(n);
    vector <long long> temp_arr(n);

    long long arr_sum = 0;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        temp_arr[i] = arr[i];
        arr_sum += arr[i];
        if (arr_sum >= MODD){arr_sum %= MODD;}
    }

    vector <long long> bit_count(MAX_BITS, 0);
    int index = 0;
    long long temp;
    while (index < MAX_BITS){
        temp = 0;
        for (int i = 0; i < n; i++){
            if (temp_arr[i] % 2 != 0){++temp;}
            temp_arr[i] /= 2;
        }
        bit_count[index] = temp;
        ++index;
    }

    vector <long long> sub_ans(n, 0);
    sub_ans[0] = arr_sum;
    long long mul_temp;
    for (long long i = 1; i < n; i++){
        temp = 1;
        while (temp <= i + 1){
            for (int j = 0; j < MAX_BITS; j++){
                mul_temp = 1;
                mul_temp *= (ncr(bit_count[j], temp) * ncr((n - bit_count[j]), (i + 1 - temp))) % MODD;
                mul_temp *= pow(2, j);
                if (mul_temp >= MODD) {mul_temp %= MODD;}
                sub_ans[i] += mul_temp;
                if (sub_ans[i] >= MODD){sub_ans[i] %= MODD;}
            }
            temp += 2;
        }
    }

    vector <long long> ans_arr(n, 0);
    ans_arr[0] = sub_ans[0];
    for (int i = 1; i < n; i++){
        ans_arr[i] = ans_arr[i - 1] + sub_ans[i];
        if (ans_arr[i] >= MODD){ans_arr[i] %= MODD;}
    }

    cin >> q;
    long long ans;
    while(q--){
        cin >> m;
        cout << ans_arr[m - 1] << endl;
    }
    return 0;
}
