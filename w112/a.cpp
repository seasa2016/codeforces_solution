#include<stdio.h>
#include<string.h>

int main(void){
    char str1[128];
    char str2[128];

    scanf(" %s", str1);
    scanf(" %s", str2);
    int size = strlen(str1);

    for(int i=0 ; i<size ; i++){
        str1[i] -= ('a'<=str1[i] && str1[i]<='z')?('a'-'A'):0;
        str2[i] -= ('a'<=str2[i] && str2[i]<='z')?('a'-'A'):0;

        if(str1[i]>str2[i]){
            printf("1");
            return 0;
        } else if(str1[i]<str2[i]){
            printf("-1");
            return 0;
        }
    }
    printf("0");
}