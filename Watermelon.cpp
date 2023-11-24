#include<iostream>
using namespace std;

int main(){
    int w;
    cin>>w;
    if(w%2!=0){
        cout<<"no";
    }
    else{
        if(w==2){
            cout<<"no";
        }
        else{
            cout<<"yes";
        }
    }
    return 0;
}