/*************************************************************************
	> File Name: 2.c
	> Author: 
	> Mail: 
	> Created Time: 2019年03月26日 星期二 17时25分57秒
 ************************************************************************/

#include<stdio.h>

int main() {
    long sum = 2, s = 0, cnt = 1, ret = 2;
    while(s < 4000001) {
        s = ret + cnt;
        if(~s & 1) sum += s;
        cnt = ret;
        ret = s;
    }
    printf("%ld", sum);
    return 0;
}
