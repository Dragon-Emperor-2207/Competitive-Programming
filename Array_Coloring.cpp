#include<iostream>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int odd=0;
        int even=0;
        for(int i=0;i<n;i++){
            if(arr[i]&1){// number is odd
                odd++;
            }
            else{
                even++;
            }
        }
        if(odd&1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}