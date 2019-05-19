/*************************************************************************
	> File Name: 3.c
	> Author: 
	> Mail: 
	> Created Time: 2019年03月26日 星期二 18时18分04秒
 ************************************************************************/

#include<stdio.h>
#define NUM 600851475143LL

int main() {
    long long num, ans, i = 2;
    num = NUM; 
    while( i * i <= NUM) {
        if (num % i == 0) ans = i;//ans记录最大的素因子
        while(num % i == 0){
            num /= i;
        }
        i++;
    }
    if(num != 1) ans = num;
    printf("%lld", ans);
    return 0;
}
