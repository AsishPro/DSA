// number of ways to form string.

#include <iostream>
#include <vector>
using namespace std;

int canString(string s,int index,vector<string>temp){
  if (index==s.length())
      return 1;
  if(index>s.length())
     return 0;

  int sum=0;
  for(int i=0;i<temp.size();i++){
      int size=temp[i].length();
      if(s.substr(index,size)==temp[i]){
        sum+=canString(s,index+size,temp);
      }
  }

  return sum;
}

int main(){
  // tc works
  // string s="abcdef";
  // vector<string>temp={"ab","abc","cd","def","abcd","ef"}; 

  //tc doesnt work
  string s="eeeeeeeeeeeeeeeeeeeeeeeeeef"; //false
   vector<string>temp={"e","ee","eee","eeee","eeeee","eeeeee"};
  cout<<canString(s,0,temp);
  return 0;
}