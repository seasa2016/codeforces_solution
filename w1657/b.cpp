#include<iostream>
#include<string>
#include<unordered_map>

long long solve(){
    int n, B, x, y;
    scanf("%d %d %d %d", &n, &B, &x, &y);
    long long ans = 0;
    int now = 0;
    int temp = 0;
    for(int i=0 ; i<n ; i++){
        temp = now + x;
        if(temp>B){
            now -= y;
        } else {
            now += x;
        }

        ans += now;
    }

    return ans;
}

int main(void){
    int n;
    scanf(" %d", &n);

    for(int i=0 ; i<n ; i++){
        printf("%lld\n", solve());
    }

    return 0;
}