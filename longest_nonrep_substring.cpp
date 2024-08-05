#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s) {
        if (s.size()==0)
            return 0;
        unordered_map<char,int>m;
        int i=0;
        int j=0;
        int maxi=INT_MIN;
        int c=0;
        for(int j=0;j<s.size();j++){
            if (m[s[j]]==0){
                cout<<"entered"<<endl;
                m[s[j]]=j+1;
                c+=1;
            }
            else{
                i=m[s[j]];
                int temp=i-2;
                for(;temp<j;temp++){
                    m[s[temp]]=0;
                    cout<<"asish"<<s[temp]<<endl;
                }
                c=j+1-i;
                m[s[j]]=j+1;
            }
            if (c>maxi)
                maxi=c;  
            cout<<i<<" "<<j<<endl; 
            cout<<c<<" "<<s[i]<<" "<<s[j]<<endl;
        }
        if (maxi==INT_MIN)
            return 0;
        return maxi;
}
int main(){
  cout<<lengthOfLongestSubstring("abba");
  return 0;
}
