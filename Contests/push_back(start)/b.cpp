#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int sum_array(int arr[], int n){
    int summ = 0;
    for (int i = 0; i < n; i++){
        summ+= arr[i];
    }
    return summ;
}

int distinct_char_count(string x){
    int x_len = x.length();
    int arr[26] = {0};
    int dist_count = 0;
    transform(x.begin(), x.end(), x.begin(), ::tolower);
    for (int i = 0; i < x_len; i++){
        if (arr[x[i] - 'a'] != 1){
            arr[x[i] - 'a'] = 1;
            ++dist_count;
        }
    }
    return dist_count;
}

int distinct_digit_count(string x){
    int x_len = x.length();
    int arr[10] = {0};
    int dist_count = 0;
    transform(x.begin(), x.end(), x.begin(), ::tolower);
    for (int i = 0; i < x_len; i++){
        if (arr[x[i] - '0'] != 1){
            arr[x[i] - '0'] = 1;
            ++dist_count;
        }
    }
    return dist_count;
}

int count_upper(string x){
    int x_len = x.length();
    int answer = 0;
    for (int i = 0; i < x_len; i++){
        if (x[i] >= 65 && x[i] <= 90){++answer;}
    }
    return answer;
}

int count_lower(string x){
    int x_len = x.length();
    int answer = 0;
    for (int i = 0; i < x_len; i++){
        if (x[i] >= 97 && x[i] <= 122){++answer;}
    }
    return answer;
}

void print_array(int arr[], int n){
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    //ios::sync_with_stdio(0);
	//cin.tie(0);
    int t;
    scanf("%d", &t);
    int num;
    int temp;
    int div;
    while (t--){
        scanf("%d", &num);
        div = 0;
        while (num){
            temp = num%10;
            if (temp % 5 ==0){++div;}
            num = num/10;
        }
        if (div > 0){printf("%d", 1);}
        else {printf("%d", 0);}
        printf("\n");
    }
    return 0;
}
