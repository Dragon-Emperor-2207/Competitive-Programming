#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t,a,b,c;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        int arr[]={a,b,c};
        if(arr[0]+arr[1]>=10){
            cout<<"yes"<<endl;
        }
        else if(arr[1]+arr[2]>=10){
            cout<<"yes"<<endl;
        }
        else if(arr[0]+arr[2]>=10){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }

    }
    return 0;
}