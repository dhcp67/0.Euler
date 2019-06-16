/*************************************************************************
	> File Name: 9.c
	> Author: 
	> Mail: 
	> Created Time: 2019年03月30日 星期六 16时35分36秒
 ************************************************************************/

#include<stdio.h>

int main() {
    int a, b, c, ret = 0;
    for(a = 1; a < 1000; a++) {
        for(b = a; b < 1000; b++) {
            c = 1000 - a - b;
            if(c <= b) break;
            if((a * a + b * b) == c * c) {
                ret = 1;
                break;
            }
        }
        if(ret) break;
    }
    printf("%d %d %d %d\n",a, b, c, a*b*c);
    return 0;
}
