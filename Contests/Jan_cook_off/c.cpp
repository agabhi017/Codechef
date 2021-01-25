#include <bits/stdc++.h>

using namespace std;
const long long MAX_SIZE = 1000001;

int main (){
    int t, n;
    scanf("%d", &t);
    vector<long long >isprime(MAX_SIZE , true);
    vector<long long >prime;
    vector<long long >SPF(MAX_SIZE);

    isprime[0] = isprime[1] = false ;
    for (long long int i=2; i<MAX_SIZE ; i++){
        if (isprime[i]){
            prime.push_back(i);
            SPF[i] = i;
        }
        for (long long int j=0; j < (int)prime.size() && i*prime[j] < MAX_SIZE && prime[j] <= SPF[i]; j++){
            isprime[i*prime[j]] = false;
            SPF[i*prime[j]] = prime[j] ;
        }
    }
    vector <long long> tuples_n (MAX_SIZE, 0);
    tuples_n[5] = 1;
    for (int i = 6; i < MAX_SIZE; i++){
        if (isprime[i] && isprime[i - 2]){tuples_n[i] = tuples_n[i - 1] + 1;}
        else {tuples_n[i] = tuples_n[i - 1];}
    }


    while (t--){
        scanf("%d", &n);
        cout << tuples_n[n] << "\n";
    }
    return 0;
}
