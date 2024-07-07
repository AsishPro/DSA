#include <iostream>
#include <vector>
using namespace std;

//seive of erastosthenes.

void seive(int num){
  vector<bool>prime(num+1,true);
  prime[0]=0;
  prime[1]=0;
  for(int i=2;i*i<=num;i++){
     if(prime[i]==1){
        for(int j=i*i;j<=num;j+=i){
            prime[j]=0;
        }
     }
  }
  for(int i=2;i<prime.size();i++){
    if(prime[i]==1)
      cout<<i<<" ";
  }
}
int main(){
  int n=49;
  seive(n);
  return 0;
}