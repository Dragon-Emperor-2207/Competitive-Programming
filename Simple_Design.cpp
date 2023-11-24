#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define for(n) for(ll i=0;i<n;i++)

int sumx(int num){
    int sum =0;
    while(num!=0){
        sum+=num%10;
        num/=10;
    }
    return sum;
}
signed main() {
    // to make input output fast
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	ll t;
	cin>>t;
	while(t--){
	    int x,k;cin>>x>>k;
        int copy = x;
        int sum = 0;
        while(x!=0){
            sum+=x%10;
            x/=10;
        }
        if(sum%k==0){
            cout<<copy<<endl;
            continue;
        }
        int harsh = sumx(copy);
        while(harsh%k!=0){
            copy++;
            harsh = sumx(copy);
        }
        cout<<copy<<endl;


	}
	return 0;
}
