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
 
bool sum_divisible_k(vector<int>&v ,int &k){
    vector<int>a(k);
    for(auto i:v){
        int rem = i%k;
        if(rem<0){
            rem+=k;
        }
        a[rem]++;
    }
    for(int i=1;i<k;i++){
        if(a[i]!=a[k-i]){
            return false;
        }
    }
    return a[0]%2==0;
}
void codeJ(){
 
}
//int32_t main(){
int main(){
int k;
cin>>k;
vector<int>v;
inputv(v);
if(sum_divisible_k(v,k)){
    cout<<"True"<<endl;
}
else{
    cout<<"False"<<endl;
}
return 0;
}
