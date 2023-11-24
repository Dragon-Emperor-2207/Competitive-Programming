	#include<iostream>
	#include<vector>
	#include<algorithm>
	using namespace std;
	typedef long long int ll;

	int main(){
		ll t;
		cin>>t;
		while(t--){
			ll n;
			cin>>n;
			vector<ll>a(n);
			vector<ll>b;
			vector<ll>c; 

			for(ll i=0;i<n;i++){
				cin>>a[i];
			}

			sort(a.begin(),a.end());

			if(a[0]!=a[n-1]){
				ll maxi=a[n-1];
				while(a[n-1]==maxi){
					c.push_back(a[n-1]);
					a.pop_back();
					n--;
				}

				cout<<a.size()<<" "<<c.size()<<endl;
				for(ll i=0;i<a.size();i++){
					cout<<a[i]<<" ";
				}
				cout<<endl;
				for(ll i=0;i<c.size();i++){
					cout<<c[i]<<" ";
				}

			}
			else{
				cout<<-1<<endl;
			}
		}
		return 0;
	}