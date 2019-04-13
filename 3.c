/*************************************************************************
	> File Name: 3.c
	> Author: 
	> Mail: 
	> Created Time: 2019年03月26日 星期二 18时18分04秒
 ************************************************************************/

#include<stdio.h>

int main() {
    long long num, max;
    num = 600851475143; 
    for(int i = 2; i * i < num; i++) {
        while(num % i == 0){
            num /= i;
            max = i;
        }
    }
    if(num != 1) max = num;
    printf("%lld", max);
    return 0;
}
