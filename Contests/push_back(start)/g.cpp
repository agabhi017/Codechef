



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
    ios::sync_with_stdio(0);
	cin.tie(0);
    int t;
    cin >> t;
    int n;
    int next;
    int prev;
    int temp;
    while (t--){
        cin >> n;
        next = 1;
        prev = 0;
        if (n == 1){cout << 0;}
        else if (n == 2){cout << 0 << endl; cout << 1 << " " << 1;}
        else {cout << 0 << endl; cout << 1 << " " << 1 << endl;
        prev = 1;
        next = 1;
            for (int i = 2; i < n; i++){
            for (int j = 0; j <= i; j++){
                cout << prev + next << " ";
                temp = prev + next;
                prev = next;
                next = temp;
            }
            cout << "\n";
        }}
        cout << "\n";
    }
    return 0;
}
