// coding in vengeance until the dragon is set free again
//vengeance is sweet
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

vector<int> factor(int n) { // prime factors of a number n in O(sqrt(n))
	vector<int> ret;
	for (int i = 2; i * i <= n; i++) {
		while (n % i == 0) {
			ret.push_back(i);
			n /= i;
		}
	}
	if (n > 1) { ret.push_back(n); }
	return ret;
}

signed main() {
    // to make input output fast
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	ll t;
	cin>>t;
	while(t--){
	   ll n;cin>>n;
	   ll count=0;
       // n is the given number
	   vector<ll>v; // will store the answer to given question
	   ll copy = n;
	   ll idx=0;
	   while(n!=0){
		ll k = n%10;
		if(k!=0){
			count++;
			ll x = k * pow(10,idx);
			v.push_back(x);
		}
		n = n/10;
		idx++;
	   }

	   cout<<count<<endl;
		
		for(ll i=0;i<v.size();i++){
		cout<<v[v.size()-1-i]<<" ";
	   }
	   cout<<endl;
		
	   

		
	}
	return 0;
}
