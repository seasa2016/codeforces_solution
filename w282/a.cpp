#include<stdio.h>

int main(void){
    int n;
    char data[8];
    scanf(" %d", &n);
    int now=0;
    for(int i=0 ; i<n ; i++){
        scanf(" %s", data);
        if(data[0]=='+' || data[2]=='+'){
            now++;
        } else {
            now--;
        }
    }
    printf("%d", now);
}