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
int count_subar(const vector<int>&a,int n,ll k){
    int j=0,ans=0;
    ll prod = 1;
    for(int i=0;i<n;i++){
        prod*=a[i];
        while(prod>=k && j<n){
            prod/=a[j];
            j++;
        }
        ans+=(i-j+1);
    }
    return ans;
}
 
void codeJ(){
 
}
//int32_t main(){
int main(){
int n;
ll k;
cin>>n;
cin>>k;
vector<int> v;
for(int i=0;i<n;i++){
    int o;
    cin>>o;
    v.push_back(o);

}
int res = count_subar(v,n,k);
cout<<res<<endl;




return 0;
}
