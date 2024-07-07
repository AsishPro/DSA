#include <bits/stdc++.h>
// using loops: is it possible to construct?
//using count variable.

using namespace std;
int main(){
  string s="abcdef";
  vector<string>arr={"ab","abc","cd","def","abcd","ef"};
  vector<int>dp(s.length()+1,0);
  dp[s.length()]=1;
  int n=s.length();
  
  for(int i=n-1;i>=0;i--){ 
      for(int j=0;j<arr.size();j++){
        if(s.substr(i,arr[j].size())==arr[j]){
                
          if(dp[i+arr[j].size()]){
            
            dp[i]=dp[i]+dp[i+arr[j].size()];
            // cout<<i<<" "<<arr[j]<<" "<<dp[i]<<" "<<dp[i+arr[j].size()]<<endl;
          }
        }
      }
  }
  for(auto i:dp){
    cout<<i<<" ";
  }
  cout<<endl;
  cout<<dp[0]<<endl;
}