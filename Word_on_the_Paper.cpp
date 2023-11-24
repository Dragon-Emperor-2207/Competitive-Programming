#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        char a[8],b[8],c[8],d[8],e[8],f[8],g[8],h[8];
        for(int i=0;i<8;i++){
            cin>>a[i]>>b[i]>>c[i]>>d[i]>>e[i]>>f[i]>>g[i]>>h[i];
        }
        vector<char>ans;
        for(int i=0;i<8;i++){
            if(a[i]>='a' && a[i]<='z'){
                ans.push_back(a[i]);
            }
        }
        for(int i=0;i<8;i++){
            if(b[i]>='a' && b[i]<='z'){
                ans.push_back(b[i]);
            }
        }
        for(int i=0;i<8;i++){
            if(c[i]>='a' && c[i]<='z'){
                ans.push_back(c[i]);
            }
        }
        for(int i=0;i<8;i++){
            if(d[i]>='a' && d[i]<='z'){
                ans.push_back(d[i]);
            }
        }
        for(int i=0;i<8;i++){
            if(e[i]>='a' && e[i]<='z'){
                ans.push_back(e[i]);
            }
        }
        for(int i=0;i<8;i++){
            if(f[i]>='a' && f[i]<='z'){
                ans.push_back(f[i]);
            }
        }
        for(int i=0;i<8;i++){
            if(g[i]>='a' && g[i]<='z'){
                ans.push_back(g[i]);
            }
        }
        for(int i=0;i<8;i++){
            if(h[i]>='a' && h[i]<='z'){
                ans.push_back(h[i]);
            }
        }
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<"";
        }
        
        cout<<endl;
    }
    return 0;
}