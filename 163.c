/*************************************************************************
	> File Name: 163.c
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月26日 星期三 18时52分18秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#define PI acos(-1)

int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    double C;
    C = sqrt((1.0 * a * a + 1.0 * b * b - 2.0 * a * b * cos(2 * PI / 360 * c)));
    printf("%.6lf\n", C);
    return 0;
}
