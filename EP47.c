/*************************************************************************
	> File Name: EP47.c
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月29日 星期六 16时09分48秒
 ************************************************************************/

#include <stdio.h>
#define MAX_N 1000000
int prime[MAX_N + 5];

int main() {
    for (int i = 2; i <= MAX_N; i++) {
        if (prime[i]) continue;
        for (int j = i; j <= MAX_N; j += i) {
            prime[j] += 1;
        }
    }
    for (int  i = 1; i <= MAX_N; i++) {
        int flag = 1;
        for (int j = 0; j < 4 && flag; j++) {
            flag = (prime[i + j] == 4);
        }
        if (flag) {
            printf("%d\n", i);
            break;
        }
    }
    return 0;
}
