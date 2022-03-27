#include<stdio.h>

int main(void){
    int n;
    scanf(" %d", &n);
    int a, b, c;
    scanf(" %d %d %d", &a, &b, &c);

    int count[2] = {0};
    count[a&1]++;
    count[b&1]++;
    count[c&1]++;
    int ans;
    if(count[0] && count[1]){
        if(count[0]>count[1]){
            if(a&1){
                ans = 0;
            } else if(b&1){
                ans = 1;
            } else{
                ans = 2;
            }
        } else {
            if((a&1)==0){
                ans = 0;    
            } else if((b&1)==0){
                ans = 1;
            } else{
                ans = 2;
            }
        }
    } else {
        int target = (count[0]==0)?0:1;
        for(int i=3 ; i<n ; i++){
            scanf(" %d", &a);
            if(target == (a&1)){
                ans = i;
                break;
            }
        }
    }
    printf("%d", ans+1);
}