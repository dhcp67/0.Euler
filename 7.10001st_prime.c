/*************************************************************************
	> File Name: 7.c
	> Author: 
	> Mail: 
	> Created Time: 2019年03月29日 星期五 18时08分41秒
 ************************************************************************/

#include<stdio.h>

int is_prime(int x);
int is_prime(int x) {
    for(int i = 2; i * i <= x; i++) {
        if(x % i == 0) {
            x = 0;
            break;
        }
    }
    return x;
}
int main() {
    int num = 3, ret = 2;
    while(ret < 10001) {
        num += 2;
        if(is_prime(num)) ret++;
    }
    printf("%d", num);
    return 0;
}
