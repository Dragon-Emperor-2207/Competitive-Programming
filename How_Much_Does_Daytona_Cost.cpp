#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define for(n) for(ll i=0;i<n;i++)
signed main() {
    // to make input output fast
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	ll t;
	cin>>t;
	while(t--){
	    int n,k;cin>>n>>k;
	    vector<int>v;
	    int flag=0;
	    for(n){
	        int x;cin>>x;
	        v.push_back(x);
	    }
	    for(n){
	        if(v[i]==k){
	            
	            flag=1;
	        }
	    }
	    if(flag){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
