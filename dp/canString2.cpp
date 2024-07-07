#include <iostream>
#include <vector>
using namespace std;

int canString(string s,int index,vector<string>temp,vector<int>&memo){
  if (index==s.length())
      return 1;
  if(index>s.length())
     return 0;
  if (memo[index]!=-1)
    return memo[index];

  for(int i=0;i<temp.size();i++){
      int size=temp[i].length();
      if(s.substr(index,size)==temp[i]){
        if(canString(s,index+size,temp,memo)){
          memo[index]=1;
          return 1;
        }
      }
  }
  memo[index]=0;
  return 0;
}

int main(){
  string s="eeeeeeeeeeeeeeeeeeeeeeeeeef"; //false
   vector<string>temp={"e","ee","eee","eeee","eeeee","eeeeee"};
  
  vector<int>memo(s.length(),-1);
  
  // vector<string>temp={"ab","abc","cd","def","abcd"};
  cout<<canString(s,0,temp,memo);
  return 0;

  //without memo it will take long time.
}