#include<bits/stdc++.h>
using namespace std;
// #define max(a,b) a>b?a:b
// #define min(a,b) a<b?a:b
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
    int minSubArrayLen(int target, vector<int>& nums) {
        int min   = INT_MAX;
        int n     = nums.size();
        int sum   = 0;
        int count = 0;
        int l     = 0;
        int r     = 0;

        while (l < n) {
            if (sum >= target) {
                min  = std::min(min, count);
                sum -= nums[l++];
                count--;
            }
            else {
                if (r < n) {
                    sum += nums[r++];
                    count++;
                }
                else break;
            }
        }

        return (min == INT_MAX) ? 0 : min;
    } 
 
void codeJ(){
 
}
//int32_t main(){
int main(){
int t;
cin>>t;
vector<int>v;
inputv(v);
cout<<minSubArrayLen(t,v)<<endl;




return 0;
}
