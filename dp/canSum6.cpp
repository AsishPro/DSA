#include <bits/stdc++.h>
using namespace std;
int canSum(int target,int a[],int n,vector<int>ans,vector<vector<int>>&result,vector<int>&memo){

  if(target==0){
     return 1;
  }

  if(memo[target]!=-1)
    return memo[target];

  for(int i=0;i<n;i++){
    if(target-a[i]>=0){
      if(canSum(target-a[i],a,n,ans,result,memo))
        memo[target]=1;
        return 1;
    }
  }  
  memo[target]=0;
  return 0;
    
}
int main(){
  int a[]={2,3,6,7};
  int n=sizeof(a)/sizeof(a[0]);
  int target=300; 
  vector<vector<int>>result;
  vector<int>memo(target+1,-1);
  vector<int>ans;

  cout<<canSum(target,a,n,ans,result,memo);
  // for(auto i :result){
  //   for(auto j:i){
  //     cout<<j<<" ";
  //   }
  //   cout<<endl;
  // }
  return 0;
}