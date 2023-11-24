// coding in vengeance until the dragon is set free again
//vengeance is sweet
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


signed main() {
    // to make input output fast
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	vector<vector<int>>v;
	int cordinatex = 0, cordinatey=0;
	for(int i=0;i<5;i++){
		vector<int>x;
		for(int j=0;j<5;j++){
			int y;cin>>y;
			if(y==1){
				cordinatex=i;cordinatey=j;
			}
			x.push_back(y);
		}
		v.push_back(x);
	}
	if(cordinatex==2){
		cout<<abs(cordinatey-2)<<endl;
	}

	else if(cordinatey==2){
		cout<<abs(cordinatex-2)<<endl;
	}
	else{
		cout<<abs(cordinatey-2)+abs(cordinatex-2)<<endl;
	}

	return 0;
}
