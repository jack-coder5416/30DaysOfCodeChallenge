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
 int maxProfit(int k, int n, int a[]) {
        // code here
         int dp[k+1][n];
       memset(dp,0,sizeof(dp));
       for(int i=1;i<=k;i++)
       {
           int mx=INT_MIN;
           for(int j=1;j<n;j++)
           {
               mx=max(mx,dp[i-1][j-1]-a[j-1]);
               dp[i][j]=max(dp[i][j-1],mx+a[j]);
           }
       }
       return dp[k][n-1];
    }
 
void codeJ(){
 
}
//int32_t main(){
int main(){
ll k,n;
cin>>k>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
cout<<maxProfit(k,n,a)<<endl;

return 0;
}
