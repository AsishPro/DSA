// number of ways to form string.
//to solve memo prblem remove it.
#include <iostream>
#include <vector>
using namespace std;

int canString(string s,int index,vector<string>temp,vector<int>&memo,vector<vector<string>>&result,vector<string>ans){
  if (index==s.length()){
      result.push_back(ans);
      return 1;
  }
  if(index>s.length())
     return 0;
  if(memo[index]!=-1)
    return memo[index];
  int sum=0;
  for(int i=0;i<temp.size();i++){
      int size=temp[i].length();
      if(s.substr(index,size)==temp[i]){
        cout<<temp[i]<<endl;
        ans.push_back(temp[i]);
        sum+=canString(s,index+size,temp,memo,result,ans);
        ans.pop_back();
      }
  }
  memo[index]=sum;
  return sum;
}

int main(){
  // tc works
  string s="abcdef";
  vector<string>temp={"ab","abc","cd","def","abcd","ef"}; 

  //tc doesnt work
  vector<vector<string>>result;
  vector<string>ans;
  // string s="eeeeeeeeeeeeeeeeeeeeeeeeeef"; //false
  //  vector<string>temp={"e","ee","eee","eeee","eeeee","eeeeee"};
   vector<int>memo(s.length(),-1);

  cout<<canString(s,0,temp,memo,result,ans);
  for(auto i:result){
    for(auto j:i){
      cout<<j<<" ";
    }
    cout<<endl;
  }
  return 0;
}