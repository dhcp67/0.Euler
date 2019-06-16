/*************************************************************************
	> File Name: 9.cpp
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月16日 星期日 18时30分26秒
 ************************************************************************/

#include <iostream>
#include "common.h"
using namespace std;

int gcd(int a, int b) {
    return (b ? gcd(b, a % b) : a);
}

int main() {
    int ans = 0;
    for (int n = 1; n <= 33; n++) {
        for (int m = n + 1; m * m + n * n <= 33; m++) {
            if (gcd(n, m) != 1) continue;
            int a = 2 * n * m;
            int b = m * m - n * n;
            int c = m * m + n * n;
            if (1000 % (a + b + c) == 0) {
                int k = 1000 / (a + b + c);
                ans = a * b * c * (int)pow(k, 3);
            }
        }
    }
    cout << ans << endl;
    return 0;
}
