/*************************************************************************
	> File Name: 11.c
	> Author: 
	> Mail: 
	> Created Time: 2019年04月04日 星期四 20时34分08秒
 ************************************************************************/

#include<stdio.h>
/*
int h_l(int arr[20][20], int *max);
int l_R(int arr[20][20] , int *max);
int f(int arr[20][20], int *max);
int y(int arr[20][20], int *max);
*/
int main() {
    int num[20][20], max = 0;
    for(int i = 0; i < 20; i++) {
        for(int j = 0; j < 20; j++) {
            scanf("%d", &num[i][j]);
            //printf("%2d", num[i][j]);
        }
    }
    printf("\n");
    for(int i = 0; i < 20; i++) {
        for(int j = 0; j < 20; j++) {
            printf("%2d ", num[i][j]);
        }
        printf("\n");
    }

    /*
    h_l(num, &max);
    l_R(num, &max);
    f(num, &max);
    y(num, &max);
    printf("%d", max);
    */
    return 0;
}
/*
int h_l(int arr[20][20], int *max) {
    for(int i = 0; i < 20; i++) {
        for(int j = 3; j < 20; j++) {
            int temp = 1,cnt = 4, ret = j;
            while(cnt) {
                cnt--;
                temp = arr[i][ret];
                ret--;
            }
            *max < temp && (*max = temp);
        }
    } 
}
int l_R(int arr[20][20],int *max) {
    for(int j = 0; j < 20; j++) {
        for(int i = 3; i < 20; i++ ) {
            int temp = 1,cnt = 4, ret = i;
            while(cnt) {
                cnt--;
                temp = arr[ret][j];
                ret--;
            }
            *max < temp && (*max = temp);
        }
    }
}
int f(int arr[20][20],int *max) {
    
}
int y(int arr[20][20], int *max) {}*/
