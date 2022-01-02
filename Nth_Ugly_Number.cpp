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
unsigned ll getNthUglyNo(int n) {
	    // code here
            if(n<6)
        return n;
        set<unsigned ll>s;
        s.insert(1);
        n--;
        while(n){
        auto it=s.begin();
        unsigned ll x=*it;
        s.erase(it);
        s.insert(x*2);
        s.insert(x*3);
        s.insert(x*5);
        n--;
}
return *s.begin();
	}
 
void codeJ(){
 
}
//int32_t main(){
int main(){
int n;
cin>>n;
cout<<getNthUglyNo(n)<<endl;




return 0;
}
