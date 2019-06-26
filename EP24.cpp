/*************************************************************************
	> File Name: EP24.cpp
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月25日 星期二 20时33分34秒
 ************************************************************************/

#include <cstdio>
#include <iostream>
#define MAX_N 10
int fact[MAX_N + 5];
int num[MAX_N + 5] = {0};

void init(int n) {
    fact[0] = 1;
    num[0] = 1;
    for (int i = 1; i <= n; i++) {
        fact[i] = fact[i - 1] * i;
        num[i] = 1;
    }
    return ;
}

int get_num(int k, int val, int n, int &x) {
    int step = k / val, x = 0; t = 0;
    for (t = 0; i <= step; x += (t < step)) {
        t += num[x];
    }
    x = i;
    k %= val;
    return k;
}

int main() {
    init(MAX_N);
    int k = 100000 - 1;
    for (int i = 10; i >= 1; i--) {
        int x;
        k = get_num(k, fact[i - 1], MAX_N, x);
        printf("%d\n", x);
    }
    return 0;
}
