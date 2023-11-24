// coding in vengeance until the dragon is set free again
//vengeance is sweet
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


signed main() {
    // to make input output fast
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int n, k, l, c, d, p, nl, np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	int totaldrink=k*l;
	int totallime=c*d;
	int a = totaldrink/nl;
	int b = totallime;
	int cc=p/np;

	int temp = min(a,b);
	int res = min(temp,cc);

	cout<<res/n<<endl;

	return 0;
}
