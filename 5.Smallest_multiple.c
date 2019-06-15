/*************************************************************************
	> File Name: 5.c
	> Author: 
	> Mail: 
	> Created Time: 2019年03月28日 星期四 18时20分05秒
 ************************************************************************/

#include <stdio.h>

typedef long long lint;
int minp_divisor(int num,int i) {
    if (i == 0) return num;
    return minp_divisor(i, num % i);
}

lint ex_gcd(lint a, lint b, int &x, int &y) {
    if(b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    int ret = ex_gcd(b, a % b, y, x);
    y -= a / b * x;
    return ret;
}

int main() {
    int digit = 1;
    for(int i = 2; i < 21; i++) {
        digit = digit / minp_divisor(digit, i) * i;

    }
    printf("%d\n", digit);
    /*
    int s = 20, ret = 0;
    while(1) {
        s += 2;
        for(int i = 3; i < 21; i++) {
            if (s % i != 0) break;
            else if (i == 20) ret = 1;
        }
        if (ret) break;
    }
    printf("%d", s);
    */
    return 0;
}
