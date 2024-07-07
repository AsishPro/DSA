#include <bits/stdc++.h>
using namespace std;
void canSum(int target,int a[],int n,vector<int>ans,vector<vector<int>>&result){

  if(target==0){
     result.push_back(ans);
     return ;
  }
  for(int i=0;i<n;i++){
    if(target-a[i]>=0){
      ans.push_back(a[i]);
      canSum(target-a[i],a,n,ans,result);
      ans.pop_back();
    }
  }  
    
}
int main(){
  int a[]={2,3,6,7};
  int n=sizeof(a)/sizeof(a[0]);
  int target=7; 
  vector<vector<int>>result;
  vector<int>ans;

  canSum(target,a,n,ans,result);
  for(auto i :result){
    for(auto j:i){
      cout<<j<<" ";
    }
    cout<<endl;
  }
  return 0;
}