/*************************************************************************
	> File Name: 32.cpp
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月16日 星期日 14时05分15秒
 ************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;
#define MAX_N 1000000

bool add_to_num(int x, int *num) {
    while(x) {
        if (num[x % 10]) return false;
        num[x % 10] += 1;
        x /= 10;
    }
    return true;
}

inline int digits(int x) {
    if(x == 0) return 1;
    return floor(log10(x)) + 1;
}

bool is_valid(int a, int b, int c) {
    if (digits(a) + digits(b) + digits(c) - 9) return false;
    int num[10] = {0};
    num[0] = 1;
    int flag = 1;
    flag = flag && add_to_num(a, num);
    flag = flag && add_to_num(b, num);
    flag = flag && add_to_num(c, num);
    return flag;
}

int can[MAX_N + 5];

int main() {
    int sum = 0;
    for (int a = 1; a < 100; a++) {
        for (int b = a + 1; b < 10000; b++) {
            if (!is_valid(a, b, a*b)) continue;
            if (!can[a * b]) {
                sum += a * b;
                cout << a << "*" << b << "=" << a * b << endl;
            }
            can[a * b]++;
        }
    }
    cout << sum << endl;
    return 0;
}
