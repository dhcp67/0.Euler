/*************************************************************************
	> File Name: 1.c
	> Author: 
	> Mail: 
	> Created Time: 2019年03月24日 星期日 19时09分08秒
 ************************************************************************/

#include<stdio.h>

int is_valid(int x) {
    return x % 3 == 0 || x % 5 == 0;
}
int main() {
    int sum = 0;
    for (int i = 3; i < 1000; i += 3) {
        if (is_valid(i)) sum += i;
    }
    printf("%d", sum);
    return 0;
}
