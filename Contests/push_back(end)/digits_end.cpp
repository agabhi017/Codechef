#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    string s;
    int num;
    int s_len;
    int summ;
    for (int i = 0; i < n; i ++){
        scanf("%d", &num);
        s = to_string(num);
        s_len = s.length();
        summ = 0;
        for (int j = 0; j < s_len; j++){
            summ += (s[j] - '0');
        }
        if (num % summ == 0){printf("Yes\n");}
        else {printf("No\n");}
    }
    return 0;

}
