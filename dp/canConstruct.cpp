#include <bits/stdc++.h>
// using loops: is it possible to construct?

using namespace std;
int main(){
  string s="abcdef";
  vector<string>arr={"ab","abc","cd","def","abcd"};
  int n=s.length();
  int min=INT_MAX;
  int k=n-1;
  for(auto i:arr){                     
    int k=i.length();
    if (k<min)
      min=k;
  }
  vector<bool>dp(s.length()+1,false);
  dp[s.length()]=true;
  
  for(int i=n-min;i>=0;i--){
      for(int j=0;j<arr.size();j++){
        if(s.substr(i,arr[j].size())==arr[j]){
          if(dp[i+arr[j].size()]){
            dp[i]=dp[i+arr[j].size()];
          }
        }
      }
  }
  cout<<dp[0]<<endl;
}