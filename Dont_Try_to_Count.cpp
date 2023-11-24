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
	    int n,m;cin>>n>>m;
		string x,s;
		cin>>x;
		cin>>s;
		int count = 0;
		int zz=0;
		if(x.find(s)!=string::npos){
			cout<<0<<endl;
			continue;
		}
		while(x.find(s)==string::npos){
			x = x+x;
			n = x.size();
			count++;
			if(x.find(s)!=string::npos){
				
				break;
			}

			if(n>2*m){
				break;
			}
		}
// 		if(x.find(s)!=string::npos && n>m){
// 			cout<<count+1<<endl;
// 			continue;
// 		}
		if(x.find(s)==string::npos && n>2*m){
			cout<<-1<<endl;
			continue;
		}
		cout<<count<<endl;

	}
	return 0;
}
