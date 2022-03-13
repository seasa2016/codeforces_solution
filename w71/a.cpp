#include<stdio.h>
#include<string.h>


int main(void){
    int n, l;
    char data[128];

    scanf(" %d", &n);
    for(int i=0 ; i<n ; i++){
        scanf(" %s", data);
        
        l = strlen(data);
        if(l>10){
            printf("%c%d%c\n", data[0], l-2, data[l-1]);
        } else {
            printf("%s\n", data);
        }
    }
    return 0;
}