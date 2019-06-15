/*************************************************************************
	> File Name: 31.cpp
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月15日 星期六 20时35分56秒
 ************************************************************************/

#include <iostream>
using namespace std;
#define MAX_N 8
#define MAX_M 200

int w[MAX_N + 5] = {1, 2, 5, 10, 20, 50, 100, 200};
long long f[MAX_M + 5];


int main() {
    f[0] = 1;
    for (int k = 0; k < MAX_N; k++) {
        for (int j = 1; j <= MAX_M; j++) {
            
        }
    }
    cout << f[MAX_M] << endl;
    return 0;
}
