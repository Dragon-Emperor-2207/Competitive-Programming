#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
  ll t;cin>>t;
  while(t--){
    ll a,b,c;cin>>a>>b>>c;
    ll move = 0;
    while(a!=b){
      ll diff;
      if(a>b){
        diff = a-b;
        move++;
        if(diff<=c){
          a = b;
        }
        else{
          a = a-c;
        }
      }
      else{
        diff = b-a;
        move++;
        if(diff<=c){
          b=a;
        }
        else{
          b= b-c;
        }
      }

    }
    cout<<(move+1)/2<<endl;
  }
  return 0;
}