/*************************************************************************
	> File Name: 30.c
	> Author: 
	> Mail: 
	> Created Time: 2019年03月31日 星期日 15时09分45秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#define Max 354295

int is(int x ) {
    int num = x, s = 0;
    while(x) {
        s += pow(x % 10, 5);
        x /= 10;
    }
    num = (num == s? num : x);
    return num;
}
int main() {
    int sum = 0;
    for(int i  = 2; i < Max ;i++) {
        sum += is(i);
    }
    printf("%d", sum);
    return 0;
}
