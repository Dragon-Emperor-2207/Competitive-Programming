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
	while(t--){
	    ll n,k;cin>>n>>k;
        // n is the number of bids
        // k is the number of items
        vector<ll>v;
        for(ll i=0;i<n;i++){
            ll x;cin>>x;
            v.push_back(x);
        }
        // finding the maximum value of the bid
        // output the value of sum_max
        vector<ll>maxi=v;
        sort(maxi.begin(),maxi.end(),greater<int>());
        ll count_max=0;
        ll sum_max=0;
        ll index=1;
        while(count_max!=k){
            sum_max+=maxi[index];
            index+=2;
            count_max++;
        }

        // finding the minimum value of the bid
        //output the value of sum_min
        ll count_min=0;
        ll sum_min=0;
        //int index_min=1;
        ll idx = maxi.size()-1;
        while(count_min!=k-1){
            sum_min+=maxi[idx];
            idx--;
            count_min++;
        }
        sum_min+=maxi[k];

        cout<<sum_min<<" "<<sum_max<<endl;



	}
	return 0;
}
