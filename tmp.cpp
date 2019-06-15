/*************************************************************************
	> File Name: tmp.cpp
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月15日 星期六 15时04分46秒
 ************************************************************************/

#include <iostream>
using namespace std;

int arr[2000005] = {0};
int main() {
    long long  s = 0;
    long long  n = 2000000;
    for (int i = 2; i <= n; i++) {
        if (!arr[i]) s += i;
        for (int j = 2; i * j <= n; j++) {
            arr[i * j] = 1;
        }
    }
    cout << s << endl;
    return 0;
}
