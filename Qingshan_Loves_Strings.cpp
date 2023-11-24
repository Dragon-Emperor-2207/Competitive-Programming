// coding in vengence until the dragon is set free again
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

signed main() {
    // to make input output fast
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	ll tt;
	cin>>tt;
	while(tt--){
	    int n,m;cin>>n>>m;
        string s;cin>>s;
        string t;cin>>t;
        int flag=0;
        for(int i=0;i+1<n;i++){
            if(s[i]==s[i+1]){
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<"Yes"<<endl;
            continue;
        }
        flag = 0;
        for(int i=0;i+1<m;i++){
            if(t[i]==t[i+1]){
                flag=1;
                break;
            }
        }
        if(flag){
            cout<<"No"<<endl;
            continue;
        }
        int possible =1;
        for(int i=0;i<n;i++){
            if(s[i]==s[i+1]){
                if(s[i]!=t[0] and s[i+1]!=t[m-1]){
                    possible*=1;
                }
                else{
                    possible=0;
                    break;
                }
            }
        }
        if(possible){
            cout<<"Yes"<<endl;
            continue;
        }
        else{
            cout<<"No"<<endl;
        }

	}
	return 0;
}
