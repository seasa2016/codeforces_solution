#include<stdio.h>
#include<math.h>

int main(void){
    int data;
    for(int i=0 ; i<5 ; i++){
        for(int j=0 ; j<5 ; j++){
            scanf(" %d", &data);
            if(data==1){
                printf("%d", abs(2-i)+abs(2-j));
            }
        }
    }
}