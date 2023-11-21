	// coding in vengeance until the dragon is set free again
	//vengeance is sweet
	#include <bits/stdc++.h>
	using namespace std;
	typedef long long int ll;
						
	signed main() {
		// to make input output fast
		ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
		ll t;
		cin>>t;
		int copy = t;
		vector<int>v;
		while(t>=10){
			int x = t%10;
			if(x>=5){
				v.push_back(9-x);
			}
			else{
				v.push_back(x);
			}
			t/=10;
		}
		if(t==9 || t<5){
			v.push_back(t);
		}
		else{
			v.push_back(9-t);
		}
		for(int i=v.size()-1;i>=0;i--){
			cout<<v[i]<<"";
		}
		cout<<endl;

		
		return 0;
	}