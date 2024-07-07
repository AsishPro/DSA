//generate minimum length

#include <bits/stdc++.h>
using namespace std;
vector<int> canSum(int target,int a[],int n,vector<vector<int>>&memo){

  if(!memo[target].empty()){
    return memo[target];
  }
  if(target==0){
     return {};
  }
  vector<int>store={-1};   
  for(int i=0;i<n;i++){
    if(target-a[i]>=0){
      vector<int>rem = canSum(target-a[i],a,n,memo);
      if(rem.empty()|| rem[0]!=-1){
        rem.push_back(a[i]);
        if(store[0]==-1||rem.size()<store.size()){
            store=rem;
        } 
      }
    }
  }  

  memo[target]=store;
  return memo[target];
    
}
int main(){
  int a[]={2,3,5};
  int n=sizeof(a)/sizeof(a[0]);
  int target=8; 

  vector<vector<int>>memo(target+1);
  vector<int> ans=canSum(target,a,n,memo);
  
  int t=0;
  for(auto i:memo){
    cout<<t<<" :";
    for(auto j:i){
      cout<<j<<" ";
    }
    t+=1;
    cout<<endl;
  }
  // for(auto i :ans ){
  //   cout<<i<<" ";
  // }
  return 0;
}