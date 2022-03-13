#include<stdio.h>

int main(void){
    int n, k, temp, now, ans=0;
    scanf(" %d %d", &n, &k);
    int i;
    for(i=0 ; i<k-1 ; i++){
        scanf(" %d", &now);
        ans += now>0;
    }
    scanf(" %d", &now);
    ans += now>0;

    for(i=i+1; i<n ; i++){
        scanf(" %d", &temp);
        ans += (now==temp) && temp>0;
    }
    printf("%d", ans);
}