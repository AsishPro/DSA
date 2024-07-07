
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main() {

    string S="zACaAbbaazzC";
    string t="";
    int maxi=0;
    unordered_set<char>set;
    int f=0;
    for (int i=0;i<S.length();i++){
      if(S[i]>='A' and S[i]<='Z' and f!=1){
          f=1;
          t="";
          set.clear();
      }
      else if (S[i]>='a' and S[i]<='z'){
        f=0;
        set.insert(S[i]);
        for(auto i:set){
          cout<<i<<" ";
        }
        cout<<set.size()<<endl;
        if (set.size()>maxi)
          maxi=set.size();
      }
    }
    cout<<maxi<<endl;
}