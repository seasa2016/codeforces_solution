#include<stdio.h>
#include<string>

using namespace std;

void solve(){
    int n, k;
    scanf(" %d %d", &n, &k);
    int temp = n*k;

    int a = temp / 2, b = (temp / 2) + (temp&1);

    if(a%k==0 && b%k==0){
        printf("YES\n");
        int base[2] = {1, 2}, index;
        for(int i=0 ; i<n ; i++){
            index = i&1;
            for(int j=0 ; j<k ; j++){
                printf("%d ", base[index]);
                base[index] += 2;
            }
            printf("\n");
        }
    } else {
        printf("NO\n");
    }
}

int main(void) {
    int num;

    scanf(" %d", &num);

    for(int i=0 ; i<num ; i++){
        solve();
    }

    return 0;
}