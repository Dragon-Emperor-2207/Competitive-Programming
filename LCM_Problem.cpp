#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
// here basic idea is that to get the lowest LCM, we will take value of x to be the most minimum as possible , which occurs at x=l. now, if we take y = 2x , then the LCM will obviously be y , which would be the smallest possible attainable LCM in the range[l,r], and if y>r, then there exists no pair of x and y for the given l and r
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t;cin>>t;
  while(t--){

  
  int l,r;cin>>l>>r;
  int x = l;
  int y = 2*l;
  if(y>r){
    cout<<-1<<" "<<-1<<endl;
  }
  else{
    cout<<x<<" "<<2*x<<endl;
  }
  }
  return 0;
}