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
 int doOverlap(int L1[], int R1[], int L2[], int R2[]) {
        
        if(L1[0]>R2[0] || L2[0]>R1[0]){
            return 0;
        }
        if(L2[1]<R1[1] || R2[1]>L1[1]){
            return 0;
        }
        return true;
    }
 
void codeJ(){
 
}
//int32_t main(){
int main(){
int l1[2],r1[2],l2[2],r2[2];
cin>>l1[0]>>l1[1]>>r1[0]>>r2[1]>>l2[0]>>l2[1]>>r2[0]>>r2[1];
int o = doOverlap(l1,r1,l2,r2);

cout<<o<<endl;





return 0;
}
