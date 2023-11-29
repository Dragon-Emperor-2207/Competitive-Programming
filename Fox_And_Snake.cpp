// coding in vengeance until the dragon is set free again
//vengeance is sweet
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


signed main() {
    // to make input output fast
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int n,m;cin>>n>>m;
    //n is number of rows
    // m is number of coloumns
    int count=0;
    char matrix[n][m];
    for(int i=0;i<n;i+=2){
        for(int j=0;j<m;j++){
            matrix[i][j]='#';
        }
    }
    for(int i=1;i<n;i+=2){
        if(count&1){
            matrix[i][0]='#';
            for(int j=1;j<m;j++){
                matrix[i][j]='.';
            }
        }
        else{
            matrix[i][m-1]='#';
            for(int j=0;j<m-1;j++){
                matrix[i][j]='.';
            }
        }
        count++;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<matrix[i][j]<<"";
        }
        cout<<endl;
        
    }

	return 0;
}
