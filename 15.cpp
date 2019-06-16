/*************************************************************************
	> File Name: 15.cpp
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月16日 星期日 20时59分49秒
 ************************************************************************/

#include <iostream>
using namespace std;


int main() {
    long long ans = 1, n = 40, m = 20;
    while (n != 20 || m != 0) {
        if (n != 20) ans *= (n--);
        if (m && ans % m == 0) ans /= (m--);
    }
    cout << ans << endl;
    return 0;
}
