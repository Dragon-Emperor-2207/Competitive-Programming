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
        if(n<7){
            cout<<"NO"<<endl;
            continue;
        }
        if(n%3==0){
            int a = 1;
            int b = 4;
            int c = n-(a+b);
            if(c == b || c==a || c%3==0){
                cout<<"NO"<<endl;
                continue;
            }
            cout<<"YES"<<endl;
            cout<<a<<" "<<b<<" "<<c<<endl;
            continue;
        }
        else if(n%3==1 || n%3==2){
            int a = 1;
            int b = 2;
            int c = n-(a+b);
            if(c == b || c==a || c%3==0){
                cout<<"NO"<<endl;
                continue;
            }
            cout<<"YES"<<endl;
            cout<<a<<" "<<b<<" "<<c<<endl;
            continue;
        }
        
        

	}
	return 0;
}
