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
 vector<int> findKthLargest(vector<int> &nums, int k)
    {
        vector<int> res;
        priority_queue<int, vector<int>, greater<int>> pq;

        for (int i = 0; i < nums.size(); i++)
        {
            pq.push(nums[i]);
            if (pq.size() > k)
            {
                pq.pop();
            }
        }
        while (!pq.empty())
        {
            res.push_back(pq.top());
            pq.pop();
        }

        return res;
    } 
 
void codeJ(){
 
}
//int32_t main(){
int main(){
 vector<int> v{100002000, 3, 8, 9, 10, 850, 24, 200, 2, 4, 700, 1000};
 vector<int> ans = findKthLargest(v,3);
 for(auto i:ans){
     cout<<i<<" ";
 }
 cout<<endl;




return 0;
}
