/*************************************************************************
	> File Name: 11.cpp
	> Author: lichun
	> Mail: 318082789@qq.com
	> Created Time: 2019年06月15日 星期六 18时40分02秒
 ************************************************************************/

#include <iostream>
using namespace std;
#define MAX_N 20

int dir[4][2] = {1, 0, 0, 1, 1, -1, 1, 1};

int grid[MAX_N + 5][MAX_N + 5];

int calc(int x, int y) {
    int ans = 0;
    for(int k = 0; k < 4; k++) {
        int p = 1;
        for (int step = 0; step < 4; step++) {
            int dx = x + step * dir[k][0];
            int dy = y + step * dir[k][1];
            if (dx < 0 || dx >= MAX_N) break;
            if (dy < 0 || dy >= MAX_N) break;
            p *= grid[dx][dy];
        }
        if(p > ans) ans = p;
    }
    return ans;
}

int main() {
    for (int i = 0; i < MAX_N; i++) {
        for (int j = 0; j < MAX_N; j++) {
            cin >> grid[i][j];
        }
    }
    for(int i = 0; i < MAX_N; i++) {
        
    }
    return 0;
}
