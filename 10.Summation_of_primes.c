/*************************************************************************
> File Name: 10.c
> Author: 
> Mail: 
> Created Time: 2019年03月30日 星期六 20时23分27秒
************************************************************************/

#include<stdio.h>

long sum_prime() {
    long sum = 0;
    int arr[2000005] = {0};
    arr[0] = arr[1] = 1;
    for(long i = 2; i < 2000000; i++) {
        if(arr[i] == 0) {
            for(int j = i; j * i < 2000000; j++) {
                arr[i * j] = 1;
            }
            !arr[i]  && (sum += i);
        }
    }
    return sum;
}
int main() {
    long sum = 0;
    sum = sum_prime();
    printf("%ld", sum);
    return 0;
}
