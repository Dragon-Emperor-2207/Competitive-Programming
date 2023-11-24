#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;cin>>n;
  int res = 0;
  for(int i=0;i<n;i++){
    string s;
    cin>>s;
    set<char>st;
    for(int i=0;i<3;i++){
      st.insert(s[i]);
    }
    auto it = st.find('+');
    if(it != st.end()){
      res++;
    }
    else{
      res--;
    }
  }
  cout<<res<<endl;
  return 0;
}