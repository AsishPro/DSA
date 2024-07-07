#include <iostream>
using namespace std;
//code to find prime or not

bool isprime(int n){
  if (n<=1)
    return false;

  //must include n;
  
  for(int i=2;i*i<=n;i++){ 
    if (n%i==0)
      return false;
  }
  return true;
}
int main(){
  int n=4;
  bool ans=isprime(n);
  cout<<ans;
}