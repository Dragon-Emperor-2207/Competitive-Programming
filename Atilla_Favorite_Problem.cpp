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
	    int n;cin>>n;
        string s;cin>>s;
        vector<char>v;
        for(n){
            v.push_back(s[i]);
        }
        sort(v.begin(),v.end());
        char ch = v[v.size()-1];
        cout<<int(ch)-int('a')+1<<endl;
	}
	return 0;
}
