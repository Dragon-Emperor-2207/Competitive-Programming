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
        // n is the number of players
        // k is the length of string s
        string s;cin>>s;
        // U is normal card
        // S is skip
        // R is reverese
        ll count = 0;
        ll flag = 1;//we are goin clockwise 
        for(ll i=0;i<k;i++){

            if(flag==1){
                if(s[i]=='U'){
                    count++;
                }
                else if(s[i]=='S'){
                    count+=2;
                }
                else{
                    flag*=-1;
                    count--;
                }

                if(count>=n){
                    count=(count)%n;
                }
                if(count==-1){
                    count=n-1;
                }
                else if(count==-2){
                    count=n-2;
                }
            }
            else {
                if(s[i]=='U'){
                    count--;
                }
                else if(s[i]=='S'){
                    count-=2;
                }
                else{
                    flag*=-1;
                    count++;
                }

                if(count==-1){
                    count=n-1;
                }
                else if(count==-2){
                    count=n-2;
                }
                if(count>=n){
                    count=(count)%n;
                }
            }
            cou
            // if(s[i]=='U'){
            //     count+=flag;
            // }
            // else if(s[i]=='S'){
            //     count+=flag*2;
            // }
            // else{
            //      flag*=-1;
            //      count+=flag;
            // }
            // if(count>=n){
            //     count = (count)%n;
            // }
            // else if(count<0){

            // }
        }
        cout<<count+1<<endl;


	}
	return 0;
}
