#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
// #define for(n) for(int i=0;i<n;i++)
int main() {
    // to make input output fast
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	ll t;
	cin>>t;
	while(t--){
      // int row[10]={-1};
      // int col[10]={-1};
      unordered_multimap<int,int>m;
	    for(int i=0;i<10;i++){
        string s;cin>>s;
        for(int j=0;j<10;j++){
          if(s[j]=='X'){
            m.insert(make_pair(i,j));
          }
        }
      }
      
      // for(int i=0;i<10;i++){
      //   m.insert(make_pair(row[i],col[i]));
      // }
      int points = 0;
      for(auto i:m){
        int a = i.first;
        int b = i.second;
        if((a>=4 && a<=5) && (b>=4 && b<=5)){
           points+=5;
        }
        else if((a>=3 && a<=6) && (b>=3 && b<=6)){
          points+=4;
        }
        else if((a>=2 && a<=7) && (b>=2 && b<=7)){
          points+=3;
        }
        else if((a>=1 && a<=8) && (b>=1 && b<=8)){
          points+=2;
        }
        else{
          points+=1;
        }

      }
      cout<<points<<endl;
	}
	return 0;
}
