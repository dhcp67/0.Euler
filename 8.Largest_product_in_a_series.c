/*************************************************************************
	> File Name: 8.c
	> Author: 
	> Mail: 
	> Created Time: 2019年03月29日 星期五 18时36分25秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int main() {
    char num[1001] = {0}, cnt[51];
    long ret, max = 0;
    for (int j = 0; j < 20; j++) {
        scanf("%s", cnt);
        strcat(num, cnt);
    }
    //printf("\n\n%s\n\n", num);
    for(int i = 0; i < 987; i++) {
        ret = 1;
        for(int j = i; j < i + 13; j++) {
            ret *= (long)(num[j] - '0');
        }
        if(max < ret) max = ret;
    }
    printf("%ld", max);
    return 0;
}
