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
int *findTwoElement(int *arr, int n) {
       int *a =new int[2];
        //using swap sort
        int i=0;
        while(i<n){
            while(arr[i]!=arr[arr[i]-1] && i<n)swap(arr[i],arr[arr[i]-1]);
            i++;
        }
        for(int i=0;i<n;i++){
            if(arr[i]!=i+1){
                a[0]=arr[i];
                a[1]=i+1;
            }
        }
        return a;
 } 
 
void codeJ(){
 
}
//int32_t main(){
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int *ans = findTwoElement(arr,n); 
cout<<*ans<<endl;
return 0;
}
