#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main()
{
  vector<int>arr = {1,1,2,3,4,-1,-2,-3,7,4,3,-2,5};
  int n = arr.size();
  int maxi = INT_MIN, mini = INT_MAX;
  int sum = 0;

  for(int right=0; right<n; right++)
  {
    if(arr[right] > 0)
    {
      if(mini != INT_MAX) {
        cout << mini << " ";
        sum += abs(mini);
        mini = INT_MAX;
      }
      maxi = max(maxi, arr[right]);
    }
    else
    {
      if(maxi != INT_MIN) {
        cout << maxi << " ";
        sum += abs(maxi);
        maxi = INT_MIN;
      }
      mini = min(mini, arr[right]);
    }
  }
  if (mini!=INT_MAX)
    sum += abs(mini);
  else
    sum += abs(maxi);

  cout << endl << sum << endl;

  return 0;
}