#include<stdio.h>
#include<string.h>

int main(void){
    char str1[128];

    scanf(" %s", str1);
    int size = strlen(str1);

    for(int i=0 ; i<size ; i++){
        str1[i] += ('a'<=str1[i] && str1[i]<='z')?0:('a'-'A');
        if(str1[i]=='a' || 
            str1[i]=='e' || 
            str1[i]=='y' || 
            str1[i]=='i' || 
            str1[i]=='o' || 
            str1[i]=='u' ){
        } else {
            printf(".%c", str1[i]);
        }
    }
}