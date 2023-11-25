// coding in vengeance until the dragon is set free again
//vengeance is sweet
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

vector<int> factor(int n) { // prime factors of a number n in O(sqrt(n))
	vector<int> ret;
	for (int i = 2; i * i <= n; i++) {
		while (n % i == 0) {
			ret.push_back(i);
			n /= i;
		}
	}
	if (n > 1) { ret.push_back(n); }
	return ret;
}

signed main() {
    // to make input output fast
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int a,b,c;cin>>a>>b>>c;
    vector<int>arr={a,b,c};
    sort(arr.begin(),arr.end());
    cout<<(arr[1]-arr[0]) + (arr[2]-arr[1]) <<endl;
	
	return 0;
}
