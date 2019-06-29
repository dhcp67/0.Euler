/*************************************************************************
	> File Name: EP26.c
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月27日 星期四 18时45分10秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>

#define MAX_N 10000
int r_length[MAX_N + 5];

int get_length(int x, int y) {
    int r = x % y, t = 1;
    memset(r_length, 0, sizeof(r_length));
    //r_length[1] = 1;
    r_length[r] = 1;
    while(r) {
        //r = r * 10 % d;
        r = r * 10 % y;
        t += 1;
        if (r_length[r]) return t - r_length[r];
        r_length[r] = t;

    }
    return 0;
}


int main() {
    int d = 0, len = -1;
    for (int i = 2; i <=10; i++) {
        int tmp = get_length(i,1);
        printf("%d\n", tmp);
    }
    return 0;
}
