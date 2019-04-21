/*************************************************************************
	> File Name: 45.sansiwubianxingshu.c
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年04月21日 星期日 14时42分35秒
 ************************************************************************/

#include <stdio.h>

long long  erfen(long long  (* h)(long long  x),long long  n, long long  m) {
    long long  head = 0, tail = n - 1, mid;
    while(head <= tail) {
        mid = (head + tail) / 2;
        if(h(mid) == m) return mid;
        else if (h(mid) > m) tail = mid - 1;
        else head = mid + 1;
    }
    return 0;
}

long long  p(long long  n) {
    return n * (3 * n - 1) / 2;
}

long long  h(long long  n) {
    return n * (2 * n - 1);
}

long long  main() {
    long long  n = 166;
    while(!(erfen(h, n, p(n)))) {
        n++;
    }
    printf("%lld\n", p(n));
    return 0;
}
