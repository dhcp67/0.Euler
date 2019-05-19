/*************************************************************************
	> File Name: 4.c
	> Author: 
	> Mail: 
	> Created Time: 2019年03月27日 星期三 18时18分01秒
 ************************************************************************/

#include<stdio.h>

int is_valid(int x,int base) {
    int raw = x, temp = 0;
    while (x) {
        temp = temp * base + x % base;
        x /= base;
    }
    return temp == raw;
}
int main() {
    int ans;
    for (int i = 100; i < 1000; i++) {
        for (int j = i; j < 1000; j++) {
            if(is_valid(i * j, 10) && i * j > ans) ans = i * j;
        }
    }
    printf("%d\n", ans);
    return 0;
}
