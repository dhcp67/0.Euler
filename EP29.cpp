/*************************************************************************
	> File Name: EP29.cpp
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月29日 星期六 13时26分41秒
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

struct Data {
    int cnt, p[5], a[5];
    int i, j;
} arr[MAX_N * MAX_N];
int cnt = 0;

bool same(Data &a, Data &b) {
    if (a.cnt != b.cnt) return false;
    for (int i = 0; i < a.cnt; i++) {
        if (a.p[i] != b.p[i] || a.a[i] != b.a[i]) return false;
    }
    return true;
}

void add(int a, int b) {
    Data temp;
    temp.cnt = 0;
    temp.i = a, temp.j = b;
    int i = 2;
    while (a != 1) {
        if (a % i == 0) {
            temp.p[temp.cnt] = i;
            temp.a[temp.cnt] = 0;
            while (a % i == 0) a /= i, temp.a[temp.cnt] += 1;
            temp.cnt += 1;
        }
        i += 1;
    }
    for (int i = 0; i < temp.cnt; i++) temp.a[i] *= b;
    for (int i = 0; i < cnt; i++) {
        if (!same(temp, arr[i])) continue;
        return ;
    }
    memcpy(arr + cnt, &temp, sizeof(temp));
    cnt += 1;
    return ;
}

bool cmp(const Data &a, const Data &b) {
    return a.j * log10(a.i) < b.j * log10(b.i);
}

int main() {
    for (int i = 2; i <= MAX_N; i++) {
        for (int j = 2; j <= MAX_N; j++) {
            add(i, j);
        }
    }
    sort(arr, arr + cnt, cmp);
    for (int i = 0; i < cnt; i++) {
        printf("%d ^ %d\n", arr[i].i, arr[i].j);
    }
    cout << cnt << endl;
    return 0;
}

