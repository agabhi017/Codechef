#include <bits/stdc++.h>

using namespace std;

const int MAXX = (int)1e6 + 5;
const int MAX = (int)1e6;

int main(){
    int t;
    scanf("%d", &t);
    int n, d;

    vector <bool> isprime(MAXX, true);
    vector <int> count_primes(MAXX, 0);
    isprime[0] = isprime[1] = false;
    for (int i = 2; i <= MAX; i += 2){
        isprime[i] = false;
    }
    isprime[2] = true;
    for (long long i = 3; i <= MAX; i += 2){
        if (isprime[i]){
            for (long long j = i * i; j <= MAX; j = j + i){
                isprime[j] = false;
            }
        }
    }
    for (int i = 1; i <= MAX; i++){
        count_primes[i] = count_primes[i - 1];
        if (isprime[i]){
            count_primes[i] += 1;
        }
    }
    while(t--){
        scanf("%d %d", &n, &d);
        int ans = count_primes[n];
        if (ans > d){
            printf("Divyam\n");
        }
        else {
            printf("Chef\n");
        }
    }
    return 0;
}
