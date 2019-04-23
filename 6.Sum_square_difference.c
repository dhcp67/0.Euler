/*************************************************************************
	> File Name: 6.c
	> Author: 
	> Mail: 
	> Created Time: 2019年03月28日 星期四 19时17分41秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>

int main() {
    int sum = 0, s = 0;
    for(int i = 1; i < 101; i++) {
        sum += i;
        s += i * i;
    }
    sum = pow(sum,2) - s;
    printf("%d", sum);
    return 0;
}
