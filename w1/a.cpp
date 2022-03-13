#include<stdio.h>

int main(void){
    int a, n, m;
    scanf(" %d %d %d", &n, &m, &a);

    printf("%lld", ((0ll + n + a -1)/a) * ((0ll + m + a -1)/a));
}