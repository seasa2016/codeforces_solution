#include<stdio.h>
#include<string>

using namespace std;

int solve(){
    int t, n;
    char data[128];
    scanf(" %d %d", &t, &n);
    scanf(" %s", data);

    if(n==0){
        return 1;
    }

    int i=0, j=t-1;
    while(i<j){
        if(data[i]!=data[j]){
            break;
        }
        i++;
        j--;
    }
    if(i<j){
        return 2;
    }
    return 1;
}

int main(void) {
    int num;

    scanf(" %d", &num);

    for(int i=0 ; i<num ; i++){
        printf("%d\n", solve());
    }

    return 0;
}