#include <bits/stdc++.h>
using namespace std;
vector<int> canSum(int target,int a[],int n,vector<vector<int>>&memo){

  if(!memo[target].empty()){
    return memo[target];
  }
  if(target==0){
     return {};
  }
  for(int i=0;i<n;i++){
    if(target-a[i]>=0){
      vector<int>rem = canSum(target-a[i],a,n,memo);
      if(rem.empty()|| rem[0]!=-1){
        rem.push_back(a[i]);
        memo[target]=rem;
        return rem;
      }
    }
  }  

  memo[target]={-1};
  return {-1};
    
}
int main(){
  int a[]={2,3,6,7};
  int n=sizeof(a)/sizeof(a[0]);
  int target=7; 

  vector<vector<int>>memo(target+1);
  vector<int> ans=canSum(target,a,n,memo);
  
  for(auto i :ans ){
    cout<<i<<" ";
  }
  return 0;
}