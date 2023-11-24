// coding in vengence until the dragon is set free again
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

signed main() {
    // to make input output fast
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	ll t;
	cin>>t;
	while(t--){
	    int n;cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            v.push_back(x);
        }
        if(n==2){
            cout<<"Yes"<<endl;
            continue;
        }
        set<int>s;
        for(int i=0;i<n;i++){
            s.insert(v[i]);
        }
        if(s.size()>2){
            cout<<"No"<<endl;
            continue;
        }
        if(s.size()==1){
            cout<<"Yes"<<endl;
            continue;
        }
        map<int,int>m;
        for(int i=0;i<n;i++){
            m[v[i]]++;
        }
        
        for(auto i:m){
            int x = i.second;
            int y = n - x;
            if(n%2==0){
                if(x==n/2 and y==n/2){
                    cout<<"Yes"<<endl;
                }
                else{
                    cout<<"No"<<endl;
                }
            }
            else{
                if(max(x,y)==(n+1)/2){
                    cout<<"Yes"<<endl;
                }
                else{
                    cout<<"No"<<endl;
                }
            }
            break;

        }
	}
	return 0;
}
