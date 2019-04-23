/*************************************************************************
	> File Name: 9.c
	> Author: 
	> Mail: 
	> Created Time: 2019年03月30日 星期六 16时35分36秒
 ************************************************************************/

#include<stdio.h>

int main() {
    int a, b, c, ret = 0;
    for(a = 1; a < 333; a++) {
        for(b = a + 1; b < 333; b++) {
            c = 1000 - a - c;
            if(c <= b) break;
            if((a * a + b * b) == c * c) {
                ret = 1;
                break;
            }
            if(ret) break;
        }
        if(ret) break;
    }
    printf("%d %d %d %d",a, b, c, a*b*c);
    return 0;
}
