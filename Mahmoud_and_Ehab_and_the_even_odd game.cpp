#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;cin>>n;
  for(int i=0;i<1;i++){

  
  int count =0;
  if(n%2==0){
    cout<<"Mahmoud"<<endl;
    break;
  }
  else{
    n = n - (n-1);
    count++;
  }
  while(n>0){
    if(n%2==0){
      if(count%2==1){
        n = n - (n-1);
        count++;
      }
      else{
        cout<<"Mahmoud"<<endl;
        n=0;
      }
    }
    else{
      if(count%2==1){
        cout<<"Ehab"<<endl;
        n=0;
      }
      else{
        n = n-(n-1);
        count++;
      }
    }
  }
  }
  return 0;
}