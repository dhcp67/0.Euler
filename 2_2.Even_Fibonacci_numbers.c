/*************************************************************************
	> File Name: 2.c
	> Author: 
	> Mail: 
	> Created Time: 2019年03月26日 星期二 17时25分57秒
 ************************************************************************/

#include<stdio.h>
#define MAX_M 4000000

int main() {
    int fib[3] = {0, 1, 0};
    while(fib[2] < MAX_M) {
        if(!(fib[2] & 1)) fib[0] += fib[2];
        fib[2] = fib[2] + fib[1];
        fib[1] = fib[2] - fib[1];
    }
    printf("%d\n", fib[0]);
    return 0;
}
