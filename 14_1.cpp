/*************************************************************************
	> File Name: 14.cpp
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月15日 星期六 19时03分05秒
 ************************************************************************/

#include <iostream>
using namespace std;
#define MAX_N 1000000

int f[MAX_N + 5];

int get_change_length(long long x) {
    if (x == 1) return 1;
    if (x <= MAX_N && f[x] != 0) return f[x];
    int ret;
    if (x & 1) ret =  get_change_length(3 * x + 1) + 1;
    else ret = get_change_length(x / 2) + 1;
    if (x <= MAX_N) f[x] = ret;
    return ret;
}

int main() {
    int max_len = 0, num = 0;
    for (int i = 1; i < MAX_N; i++) {
        int l = get_change_length(i);
        if(l > max_len) max_len = l, num = i;
    }
    cout << num << " " << max_len << endl;
    return 0;
}
