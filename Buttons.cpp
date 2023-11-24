#include<iostream>
using namespace std;

typedef long long int ll;

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll a,b,c;
		cin>>a>>b>>c;
		if(c&1){	
			if(b>a){
				cout<<"Second"<<endl;
			}
			else{
				cout<<"First"<<endl;		
			}
		}
		else{
			if(a>b){
				cout<<"First"<<endl;
			}
			else{
				cout<<"Second"<<endl;
			}
		}
	}
	return 0;
}