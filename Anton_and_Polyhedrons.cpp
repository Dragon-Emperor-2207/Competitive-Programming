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
	int sum=0;
    while(t--){
        string s;cin>>s;
        if(s == "Tetrahedron"){
            sum+=4;
        }
        else if(s == "Cube") sum+=6;
        else if(s == "Octahedron") sum+=8;
        else if(s == "Dodecahedron") sum+=12;

        else{
            sum+=20;
        }
    }
    cout<<sum<<endl;
	return 0;
}
