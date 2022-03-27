#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;
bool prime[1000001] = {0};

bool check(long long val){
    int l=2, r=1000001, m;
    long long temp;
    while(l<r){
        m = (l+r)/2;
        temp = 1ll*m*m;
        if(temp==val){
            return !prime[m];
        } else if(temp<val){
            l = m+1;
        } else {
            r = m;
        }
    }
    temp = l*l;
    return temp==val?(!prime[l]):false;
}

int main(void){
    int size = 1000001;
    for(int i=2 ; i<size ; i++){
        if(prime[i]==0){
            for(int j=i+i ; j<size ; j+=i){
                prime[j] = 1;
            }
        }
    }

    int n;
    long long val;
    cin>>n;
    for(int i=0 ; i<n ; i++){
        cin>>val;
        if(check(val)){
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }

}