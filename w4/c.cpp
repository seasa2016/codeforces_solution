#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;
int main(void){
    int n;
    cin>>n;
    unordered_map<string, int> data;
    string temp;
    for(int i=0 ; i<n ; i++){
        cin>>temp;
        if(data.find(temp)==data.end()){
            cout<<"OK"<<endl;
            data[temp] = 1;
        } else {
            cout<<temp<<data[temp]<<endl;
            data[temp]++;
        }
    }

}