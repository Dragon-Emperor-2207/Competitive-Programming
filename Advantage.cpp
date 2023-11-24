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
        vector<int>v;
        priority_queue<int>q;
        for(n){
            int x;cin>>x;
            v.push_back(x);
            q.push(x);
        }
        int greatest = q.top();
        q.pop();
        int next = q.top();
        for(n){
            if(v[i]!=greatest){
                cout<<v[i]-greatest<<" ";
            }
            else{
                cout<<greatest-next<<" ";
            }
        }
        

	}
	return 0;
}
