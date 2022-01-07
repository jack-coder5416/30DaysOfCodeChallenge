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
   map<string, pair<int, string>> dp;
    string matrixChainOrder(int A[], int n) {
        return matrixChainOrderUtil(A, 0, n - 1).second;
    }
    
    pair<int, string> matrixChainOrderUtil(int p[], int l, int r) {
    
        if(l + 1 == r) return {0, "" + string(1, l + 'A')};
        string key = to_string(l) + ";" + to_string(r);
        if(dp.count(key)) return dp[key];
        
        int currMin = INT_MAX;
        string minString;
        for(int k = l + 1; k < r; k++) {
            auto p1 = matrixChainOrderUtil(p, l, k), p2 = matrixChainOrderUtil(p, k, r);
            if(p1.first + p2.first + p[l] * p[k] * p[r] < currMin) {
                currMin = p1.first + p2.first + p[l] * p[k] * p[r];
                
                minString = p1.second + p2.second;
            }
        }
        return dp[key] = {currMin, "(" + minString + ")"};
    }
 
void codeJ(){
 
}
//int32_t main(){
int main(){





return 0;
}
