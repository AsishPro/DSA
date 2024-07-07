// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int>v={
        1,2,3,4,5,5,6
    };
    // v.insert(v.begin(),3);
    // v.erase(v.begin(),3); wrong
    v.erase(v.begin()+3)
    for(auto i:v){
        cout<<i<<endl;
    }
}