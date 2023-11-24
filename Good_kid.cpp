#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define for(n) for(int i=0;i<n;i++)
int main() {
    // to make input output fast
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	ll t;
	cin>>t;
	while(t--){
	    int n;cin>>n;
      int arr[n];
      for(n){
        cin>>arr[i];
      }
      sort(arr,arr+n);
      arr[0]++;
      ll product=1;
      for(n){
        product*=arr[i];
      }
      cout<<product<<endl;
	}
	return 0;
}
