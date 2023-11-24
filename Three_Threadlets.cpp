#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
//#define for(n) for(ll i=0;i<n;i++)

bool check(vector<int>x){
	bool flag = false;
	sort(x.begin(),x.end());
	if(x[0]== x[x.size()-1]){
		flag = true;
	}
	return flag;
}
signed main() {
    // to make input output fast
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	ll t;
	cin>>t;
	while(t--){
	    vector<int>v;
		int a,b,c;cin>>a>>b>>c;
		int count = 0;
		int hero = 0;
		v.push_back(a);
		v.push_back(b);
		v.push_back(c);
		sort(v.begin(),v.end());
		if(v[0]==v[2]){
			cout<<"YES"<<endl;
			continue;
		}
		bool harsh = check(v);
		while(harsh == false){
			int z = v[v.size()-1];
			v.pop_back();
			int laxman = v[0];
			int ram = z - v[0];
			v.push_back(laxman);
			v.push_back(ram);
			sort(v.begin(),v.end());
			count++;
			harsh = check(v);
			if(count>3){
				hero = 1;
				break;
			}
			
		}
		if(hero == 1){
			cout<<"NO"<<endl;
		}
		else{
			cout<<"YES"<<endl;
		}

	}
	return 0;
}
