/*************************************************************************
	> File Name: EP29_2.cpp
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月29日 星期六 13时28分19秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <vector>
#include <map>
#include <cmath>
using namespace std;
#define MAX_N 100
int f[MAX_N + 5][MAX_N + 5];
int dis[MAX_N + 5];
struct Data {
    int a, b;
} arr[MAX_N * MAX_N];
int cnt = 0;

bool cmp(const Data &a, const Data &b) {
    return a.b * log10(a.a) < b.b * log10(b.a);
}

void getXY(int a, int b, int &x, int &y) {
    int temp = a;
    x = dis[a], y = 0;
    while (temp != 1) y += b, temp /= x;
    return ;
}

void filter(int i, int x, int y) {
    for (int k = 2; k <= y; k++) {
        if (y % k) continue;
        int a1 = k;
        int a2 = y / k;
        if (a1 * log10(x) <= log10(MAX_N) && pow(x, a1) > i) {
            f[(int)pow(x, a1)][a2] = 1;
        }
    }
}

int main() {
    dis[1] = 1;
    for (int i = 2; i <= MAX_N; i++) {
        if (dis[i]) continue;
        for (int j = i; j <= MAX_N; j *= i) {
            dis[j] = i;
        }
    }
    for (int i = 2; i <= MAX_N; i++) {
        for (int j = 2; j <= MAX_N; j++) {
            if (f[i][j]) continue;
            int x, y;
            getXY(i, j, x, y);
            filter(i, x, y);
        }
    }
    int sum = 0;
    for (int i = 2; i <= MAX_N; i++) {
        for (int j = 2; j <= MAX_N; j++) {
            if (f[i][j]) continue;
            arr[cnt].a = i, arr[cnt].b = j;
            cnt += 1;
        }
    }
    sort(arr, arr + cnt, cmp);
    for (int i = 0; i < cnt; i++) {
        printf("%d ^ %d\n", arr[i].a, arr[i].b);
    }
    cout << cnt << endl;
    return 0;
}

