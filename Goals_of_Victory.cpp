#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,sum=0;
        cin >> n;
        vector<int> A(n);
        for(int i=0;i<n-1;i++)
        {
            cin >> A[i];
            sum+=A[i];
        }
        cout << -1*sum << "\n";
    }
}