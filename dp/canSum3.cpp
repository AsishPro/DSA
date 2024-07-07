#include <iostream>
#include <vector>
using namespace std;
int canSum(int target,vector<int>&a,vector<int>&ans,vector<int>&dp){
  if(target==0){
    return 1;
  }
  if(dp[target]!=-1)
    return dp[target];

  for(int j=0;j<a.size();j++){
      if(target-a[j]>=0)
        if(canSum(target-a[j],a,ans,dp)){
          ans.push_back(a[j]);
          dp[target]=1;
          return 1;
        }
  }
  dp[target]=0;
  return 0;
}

int main(){
  vector<int>a={7,14};
  vector<int>ans;
  int t=300;
  vector<int>dp(t+1,-1);
  cout<<canSum(t,a,ans,dp)<<endl;
  cout<<dp[t];
}