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
 vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
     vector<int> ans;
        deque<int> q;
        for(int i = 0 ; i < k ; i++){
            int v = arr[i];
            while(!q.empty() && q.back() < v) q.pop_back();
            q.push_back(v);
        }
        ans.push_back(q.front());
        for(int i = 0 , j = k ; j < n ; i++ , j++){
            if(arr[i] == q[0]) q.pop_front();
            int v = arr[j];
            while(!q.empty() && q.back() < v) q.pop_back();
            q.push_back(v);
            ans.push_back(q[0]);
        }
        return ans;
    } 
 
void codeJ(){
 
}
//int32_t main(){
int main(){
int n,k;
cin>>n>>k;
vector<int>v;
inputv(v);
vector<int>a=max_of_subarrays(v,n,k);
for(auto i:a){
    cout<<i<<" ";
}
cout<<endl;
return 0;
}
