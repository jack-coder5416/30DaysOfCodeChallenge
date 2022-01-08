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
bool sudoko(vector<vector<int>>&mat){
    unordered_map<int,unordered_set<int>>row,column,grid;
    int n = mat.size(),m=mat[0].size();
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j]){
                int val = mat[i][j];
                if(row[i].count(val)){
                    return false;
                }
                if(column[j].count(val)){
                    return false;
                }
                int box = (i/3)*3 + j/3;
                if(grid[box].count(val)){
                    return false;
                }
                row[i].insert(mat[i][j]);
                column[j].insert(mat[i][j]);
                grid[box].insert(mat[i][j]);
            }
        }
    }
    return true;
}
 
void codeJ(){
 
}
//int32_t main(){
int main(){





return 0;
}
