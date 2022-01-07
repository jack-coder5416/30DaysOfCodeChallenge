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
vector<vector<string>> displayContacts(int n, string contact[], string s)
    {
        // code here
        set<string>mp;
       vector<vector<string>>ans(s.size());
       for(int i=0;i<n;i++){
           mp.insert(contact[i]);
       }
       for(int i=0;i<s.size();i++){
           for(auto it:mp){
               if(s.substr(0,i+1)==it.substr(0,i+1)){
                   ans[i].push_back(it);
               }
           }
           if(ans[i].size()==0){
               ans[i].push_back(to_string(0));
           }
       }
       return ans;
    } 
 
void codeJ(){
 
}
//int32_t main(){
int main(){

return 0;
}
