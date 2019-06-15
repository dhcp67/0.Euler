/*************************************************************************
	> File Name: 7_2.10001st_prime.cpp
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月15日 星期六 14时45分24秒
 ************************************************************************/

#include <iostream>
using namespace std;
#define MAX_N 100

int prime[MAX_N + 5];

int main() {
    for (int M = 2; M <= MAX_N; M++) {
        if(prime[M]== 0) {
            prime[++prime[0]] = M;
        }
        for (int j = 1; j <= prime[0]; j++) {
            if(prime[j] * M > MAX_N) break;
            prime[prime[j] * M] = 1;
            if(M % prime[j] == 0) break;
        }
    }
    cout << prime[10001] << endl;
    return 0;
}
