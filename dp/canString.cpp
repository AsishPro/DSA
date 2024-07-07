#include <iostream>
#include <vector>
using namespace std;

int canString(string s,int index,vector<string>temp){
  if (index==s.length())
      return 1;

  for(int i=0;i<temp.size();i++){
      int size=temp[i].length();
      int k=index;
      int c=0;
      for(int j=0;j<size;j++){
        if( k>=s.length() || s[k]!=temp[i][j])
            break;
        else
          c++;
        k++;
      }
      if (c==size){
        if(canString(s,k,temp)){
          cout<<temp[i]<<" ";
          return 1;
        }
      }
  }

  return 0;
}

int main(){
  string s="abcdef";
  vector<string>temp={"ab","abc","cd","def","abcd"};
  cout<<canString(s,0,temp);
  return 0;
}