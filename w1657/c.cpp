#include<stdio.h>
#include<string>
#include<vector>

using namespace std;

int min(int a, int b){
    return a<b?a:b;
}

void solve(){
    char data[1000001] = {0};
    int arr[1000001] = {0};
    int size;
    scanf(" %d", &size);

    for(int i=0 ; i<size ; i++){
        data[2*i] = '.';
        scanf(" %c", &data[2*i+1]);
    }
    data[2*size] = '.';
    data[2*size+1] = 0;


    int L = 0, R = 0, N=2*size+1;
    //printf("-");
    arr[0] = 1;
    for (int i=1; i<N; ++i) // 從z[1]開始
    {
        arr[i] = (R > i) ? min(arr[2*L-i], R-i) : 1;
        while (i-arr[i] >= 0 && i+arr[i] < N &&
               data[i-arr[i]] == data[i+arr[i]]) arr[i]++;
        if (i+arr[i] > R) L = i, R = i+arr[i];
        //printf("%d ", arr[i]);
    }
    //printf("\n");
    //printf("?");
    vector<char> now;
    int c=0, r=0, l=1;
    for(int i=1 ; i<N ; i+=2){
        if(now.size() && now.back()=='(' && data[i]==')'){
            now.pop_back();
        } else {
            now.push_back(data[i]);
        }
        //printf("(%d %d) ", i-l, arr[(i+l)/2]*2);
        if(i-l < arr[(i+l)/2]*2 && i!=l){
            now.clear();
        }
        if(now.empty()){
            c++;
            l = i+2;
        }
    }
    //printf("\n");


    printf("%d %d\n", c, (N-l)/2);
}

int main(void){
    int n;
    scanf(" %d", &n);

    for(int i=0 ; i<n ; i++){
        solve();
    }

    return 0;
}