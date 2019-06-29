/*************************************************************************
	> File Name: EP42.c
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月29日 星期六 15时06分38秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "EP42.txt"

int triangle(int x) {
    return x * (x + 1) / 2;
}

bool binary_search(int (*func)(int), int l, int r, int x) {
    if (l > r) return false;
    int mid = (l + r) >> 1;
    if (func(mid) == x) return true;
    if (func(mid) > x) r = mid - 1;
    else l = mid + 1;
    return binary_search(func, l, r, x);
}
bool is_valid(char *str) {
    int sum = 0;
    for (int i = 0; str[i]; i++) {
        sum += (str[i] - 'A' + 1);
    }
    return binary_search(triangle, 1 , sum, sum);
}

int main() {
    int n = sizeof(str) / 100, cnt = 0;
    printf("%d\n", n);
    for (int i = 0; i < n; i++) {
        if (is_valid(str[i])) cnt++;   
    }
    printf("%d\n", cnt);
    return 0;
}
