#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using lli=long long;

long long int mod_power(long long int a,long long int b,lli mod)
{
   if(b==0)
   {
      return 1;
   }
   
   a%=mod;
   
   long long int ans=mod_power(a,b/2,mod);
   ans*=ans;
   ans%=mod;
   
   if(b%2)
   {
      ans*=a;
      ans%=mod;
   }
   
   return ans;
}

long long int power(long long int a,long long int b)
{
   if(b==0)
   {
      return 1;
   }
   
   long long int ans=power(a,b/2);
   ans*=ans;
   
   if(b%2)
   {
      ans*=a;
   }
   
   return ans;
}

vector<int> minfactor(int n)
{
   vector<int> nums(n,0);
   
   for(int i{2};i*i<=n;i++)
   {
      if(nums[i]!=0)
      {
         continue;
      }
     
      nums[i]=i;
     
      for(int j{i*i};j<=n;j+=i)
      {
         if(nums[j]==0)
         {
            nums[j]=i;
         }
      }
   }
   
   for(int i{2};i<n;i++)
   {
      if(nums[i]==0)
      {
         nums[i]=i;
      }
   }
   
   return nums;
}

vector<bool> prime(int n)
{
   vector<bool> sieve(10001,true);
   sieve[0]=false;
   sieve[1]=false;
   
   for(int i{2};i*i<=1000;i++)
   {
      if(!sieve[i])
      {
         continue;
      }
      for(int j{i*i};j<=1000;j+=i)
      {
         sieve[j]=false;
      }
   }
   
   return sieve;
}

/*

**Just observer how you can maximize or minimize the result by given opeartion
**If question says you can partition your array into k>1 parts{then think you realy
   need k partition or just 2 partition}
**Test Case ache se dekh le
**Permutaion array ko sort karne par A[i]=i+1 {0 based indexing} ho jaiga
**Greedy => sorting,lexographical string,kadane algo,looking for every element
   weather it can be answer??

*/

int main()
{
   fastio()
   
   int T{};
   cin>>T;
   
   for(int Q{};Q<T;Q++)
   {
      lli n{};
      cin>>n;
     
      string s;
      cin>>s;
     
      lli i{n-1},j{},c=n-1;
     
      vector<lli> nums(n,-1);
     
      while(i>=0)
      {
         while(s[i]!='0')
         {
            i--;
            if(i<0)
            {
               break;
            }
         }
         
         if(i<0)
         {
            break;
         }
         
         nums[j]=c-i;
         if(j!=0)
         {
            nums[j]+=nums[j-1];
         }
         j++;
         i--;
         c--;
      }
     
      for(lli k{};k<n;k++)
      {
         cout<<nums[k]<<" ";
      }
     
      cout<<endl;
   }
	return 0;
}