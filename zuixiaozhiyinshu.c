/*************************************************************************
	> File Name: tmp.c
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月15日 星期六 15时04分51秒
 ************************************************************************/

#include <stdio.h>
#define MAX_N 200000

int arr[MAX_N + 5] = {0};

int main() {
    for(int i = 2; i <= MAX_N; i += 1 + (i % 2)) {
        if (arr[i]) continue;
        arr[i] = i;
        for(int j = 2 * i; j <= MAX_N; j += i) {
            if (arr[j] == 0) arr[j] = i;
        }
    }
    int n;
    while(~scanf("%d", &n)) {
        printf("arr[%d] = %d\n", n, arr[n]);
    }
    
}
