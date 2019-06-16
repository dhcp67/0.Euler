/*************************************************************************
	> File Name: 38.cpp
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月16日 星期日 15时05分19秒
 ************************************************************************/

#include <iostream>
#include "common.h"
using namespace std;

int digits(long long num) {
    return floor(log10(num)) + 1;
}

long long calc(int x) {
    long long ans = 0;
    int n = 1;
    while (digits(ans) < 9) {
        ans *= pow(10, digits(n * x));
        ans += n * x;
        n += 1;
    }
    if (digits(ans) != 9) return -1;
    int num[10] = {0};
    num[0] = 1;
    long long temp = ans;
    while (temp) {
        if (num[temp % 10]) return -1;
        num[temp % 10] += 1;
        temp /= 10;
    }
    return ans;
}

int main() {
    long long temp, ans = 0;
    for (int i = 1; i < 10000; i++) {
        temp = calc(i);
        if(temp > ans) ans = temp;
    }
    cout << ans << endl;
    return 0;
}
