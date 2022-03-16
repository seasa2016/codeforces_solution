#include<stdio.h>
#include<string.h>

int main(void){
    char str[128];

    scanf(" %s", str);
    int size = strlen(str);
    int count[256] = {0};

    for(int i=0 ; i<size ; i+=2){
        count[str[i]]++; 
    }
    int index = 0;
    for(int i='1' ; i<='3' ; i++){
        while(count[i]){
            str[index] = i;
            index += 2;
            count[i]--;
        }
    }
    str[index-1] = 0;
    printf("%s", str);
}