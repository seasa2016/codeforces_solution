#include<stdio.h>

int main(void){
    int n;
    scanf(" %d", &n);
    int a, b, c;
    int ans = 0;
    for(int i=0 ; i<n ; i++){
        scanf(" %d %d %d", &a, &b, &c);
        ans += (a+b+c)>=2;
    }
    printf("%d", ans);
}