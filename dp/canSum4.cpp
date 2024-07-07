#include <iostream>
#include <vector>
using namespace std;
vector<int> canSum(int target,vector<int>&a,vector<vector<int>>&dp){
  if(target==0){
    return {};
  }
  if (!dp[target].empty()){
    return dp[target];
  }
  for(int j=0;j<a.size();j++){
     if(target-a[j]>=0){
        vector<int> temp=canSum(target-a[j],a,dp);
        if (temp.empty()|| temp[0]!=-1){
            temp.push_back(a[j]);
            dp[target]=temp;
            return dp[target];
        }
    }   
  }
  
  dp[target]={-1};
  return dp[target];
}

int main(){
  vector<int>a={5,4,2};
  vector<int>ans;
  int t=8;
  vector<vector<int>>dp(t+1);
  
  canSum(t,a,dp);
  for(auto i:dp[t]){
    cout<<i<<" ";
  }

}