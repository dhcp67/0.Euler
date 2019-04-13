/*************************************************************************
	> File Name: 4.c
	> Author: 
	> Mail: 
	> Created Time: 2019年03月27日 星期三 18时18分01秒
 ************************************************************************/

#include<stdio.h>

int is_huiwen(int num) {
    int digit = 0;
    int x = num;
    while(x > 0) {
        digit = digit * 10 + x % 10;
        x /= 10;
    }
    digit = (digit == num);
    return digit;
}
int main() {
    int max = 0;
    for(int i = 100; i < 1000; i++) {
        for(int j = i; j < 1000; j++) {
            if(is_huiwen(i * j) && i * j > max) max = i * j;
        }
    }
    printf("%d", max);
    return 0;
}
