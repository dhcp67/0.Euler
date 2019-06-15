/*************************************************************************
	> File Name: 7_2.10001st_prime.cpp
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月15日 星期六 14时45分24秒
 ************************************************************************/

#include <iostream>
using namespace std;
#define MAX_N 1000000

int is_prime[MAX_N + 5];

int main() {
    for(int i = 2; i * i <= MAX_N; i++) {
        if(is_prime[i]) continue;
        is_prime[++is_prime[0]] = i;
        for (int j = 1; j < is_prime[0]; j++) {
            if (is_prime[j]) break;
            is_prime[i * j] = 1;
        }
    }
    cout << is_prime[11] << endl;
    return 0;
}
