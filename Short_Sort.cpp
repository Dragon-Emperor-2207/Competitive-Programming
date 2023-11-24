#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define for(n) for(int i=0;i<n;i++)
int main() {
    // to make input output fast
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	ll t;
	cin>>t;
	while(t--){
	    string s;cin>>s;
      if(s[0]=='a' || s[1] == 'b' || s[2] == 'c'){
        cout<<"YES"<<endl;
      }
      else{
        cout<<"NO"<<endl;
      }
	}
	return 0;
}