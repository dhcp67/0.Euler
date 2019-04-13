/*************************************************************************
	> File Name: 34.c
	> Author: 
	> Mail: 
	> Created Time: 2019年03月31日 星期日 17时05分29秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>

int is(int x) {
    int num = x, s = 0;
    while(x) {
        int temp = 1;
        for(int i = x % 10; i > 0; i--) {
            temp *= i;
        }
        s += temp;
        x /= 10;
    }
    num = (num == s ? num : x);
    return num;
}
int main() {
    int s = 0;
    for(int i = 3; i < 2000000; i++) {
        s += is(i);
    }
    printf("%d", s);
    return 0;
}
