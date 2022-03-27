#include<iostream>
#include<string>
#include<unordered_map>

int solve(){
    int x, y;

    scanf("%d %d", &x, &y);
    int temp = x*x + y*y;
    if(temp==0) return 0;
    
    for(int i=1 ; i<70 ; i++){
        if(temp==i*i){
            return 1;
        }
    }

    return 2;
}

int main(void){
    int n;
    scanf(" %d", &n);

    for(int i=0 ; i<n ; i++){
        printf("%d\n", solve());
    }

    return 0;
}