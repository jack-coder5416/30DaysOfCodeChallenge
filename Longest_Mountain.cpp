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

int length_of_longest_mountain(vector<int>&v){
 int n = v.size();
 int ans=0;
 for(int i=1;i<=n-2;){
     if(v[i]>v[i-1]&& v[i]>v[i+1]){
         int count=1,j=1;
         while(j>0 && v[j]>v[j-1]){
             j--;
             count++;
         }
         while(i<n-1 && v[i]>v[i+1]){
             i++;
             count++;
         }
         ans=max(ans,count);
     }
     else{
          i++;
     }
 }
 return ans;
} 
 
void codeJ(){
 
}
//int32_t main(){
int main(){
vector<int>v;
inputv(v);
cout<<length_of_longest_mountain(v)<<endl;


return 0;
}
