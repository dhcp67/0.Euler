/*************************************************************************
	> File Name: 44.cpp
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月16日 星期日 15时28分01秒
 ************************************************************************/

#include <iostream>
#include "common.h"
using namespace std;

long long Pentagonal(int n) {
    return n * (3 * n - 1) / 2;
}

bool is_Pt(int num) {
    int left = 2, right = 10000;
    int mid;
    while(left <= right) {
        mid = (left + right) / 2;
        int tmp = Pentagonal(mid);
        if (tmp == num) return true;
        if (tmp < num) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return false;
}

int main() {
    lint n = 4;
    while (!is_Pt(Pentagonal(n) + Pentagonal(n++ + 1)));
    cout << --n << endl;
    return 0;
}
