#include<bits/stdc++.h>
using namespace std;
#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b
#define O cout<<
#define I cin>>
#define f0(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<n;i++)
#define speed_karo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll  long long
#define lli  long long
#define ff first
#define ss second
#define vecs(v) sort(v.begin(),v.end())
#define be  v.begin(),v.end()
int inclusion(int n,int a,int b){
  int c1 = n/a;
  int c2 = n/b; 
  int c3 = n/(a*b);
  return c1+c2-c3;  
}
void inputv(vector<int> &v){
  for(auto &i : v){
      cin>>i;
  }
}
void outputv(vector<int> &v){
  for(auto i : v){
      cout<<i;
  }
}
///-------------------------CODE BY JATIN------------------------
int countWays(string str){
   int n=str.length();
    int dp[n+1];
    int mod = 1e9 + 7;
    dp[0]=1;
    dp[1]=1;
   
    if(n==1 && str[0]!='0')
    return 1;
    if(str[0]=='0')
    return 0;
    
    for(int i=2;i<=n;i++)
    {
        dp[i]=0;
        
        if(str[i-1]>'0')
        dp[i] = dp[i-1];
        
        if(str[i-2]=='1' || str[i-2]=='2' && str[i-1]<'7')
        dp[i] = (dp[i]+dp[i-2])%mod;
    }
    return dp[n];
}
 
void codeJ(){
 
}
//int32_t main(){
int main(){
string s;
cin>>s;
cout<<countWays(s)<<endl;



return 0;
}
