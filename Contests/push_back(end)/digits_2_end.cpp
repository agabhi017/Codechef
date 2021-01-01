
#include <iostream>

using namespace std;

int main(){
    //ios::sync_with_stdio(0);
	//cin.tie(0);
    int t;
    scanf("%d", &t);
    int num;
    int num2;
    for (int i = 0; i < t; i++){
        scanf("%d", &num);
        num2 = num;
        int summ = 0;
        while (num2 > 0){
            summ += num2 % 10;
            num2 = num2 / 10;
        }
        if (num % summ == 0){printf("Yes\n");}
        else{printf("No\n");}
    }
    return 0;
}
