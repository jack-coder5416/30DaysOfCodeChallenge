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
string decodeString(string &s,int &i){
    string result;
    while(i<s.size() && s[i]!=']'){
      if(isdigit(s[i])){
          int k=0;
          while(i<s.size()&& isdigit(s[i])){
              k = 10*k + s[i++]-'0';
          }
          i++;
          string r = decodeString(s,i);
          while(k-->0){
              result+=r;
          }
          i++;
      }
      else{
          result+=s[i++];
      }
    }
    return result;
}
string decodeString(string &s){
    int i = 0;
    return decodeString(s,i);

} 
 
void codeJ(){
 
}
//int32_t main(){
int main(){
string s;
cin>>s;
cout<<decodeString(s)<<endl;
return 0;
}
