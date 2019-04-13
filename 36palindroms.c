/*************************************************************************
	> File Name: 36.c
	> Author: 
	> Mail: 
	> Created Time: 2019年04月02日 星期二 14时39分52秒
 ************************************************************************/

#include<stdio.h> 

int is_palin(int x, int cnt) {
    int y = 0, f = x;
    while(x) {
        y = cnt * y + x % cnt;
        x /= cnt;
    }
    return (f == y);
}
int main() {
    int digit = 0;
    for(int i  = 1; i < 1000000; i+=2) {
        if(is_palin(i, 10) &&is_palin(i, 2)) {
            digit += i;
            //printf("%d\n", i);
        }
    }
    printf("%d\n", digit);
    return 0;
}
/*
双进制回文数

十进制数585 = 1001001001（二进制表示），因此它在这两种进制下都是回文数。

找出所有小于一百万，且在十进制和二进制下均回文的数，并求它们的和。

（请注意，无论在哪种进制下，回文数均不考虑前导零。）
*/
