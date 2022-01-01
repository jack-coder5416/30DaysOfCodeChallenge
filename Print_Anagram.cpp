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
vector<vector<string>> Anagrams(vector<string>&s){
    vector<vector<string>>ans;
    unordered_map<string,vector<string>> mp;
    for(auto it : s){
        string s1 = it;
        vecs(s1);
        mp[s1].push_back(it);
    }
    for(auto i:mp){
        ans.push_back(i.ss);
    }
    return ans;
} 
 
void codeJ(){
 
}
//int32_t main(){
int main(){
ll n;
cin>>n;
vector<string>v;
for(int i=0;i<n;i++){
    string o;
    cin>>o;
    v.push_back(o);
}
vector<vector<string>>s = Anagrams(v);
for(auto k: s){
    for(auto it:k){
        cout<<it<<" ";
    }
    cout<<endl;
}




return 0;
}
