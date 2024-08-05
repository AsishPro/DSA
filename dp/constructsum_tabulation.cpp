#include <iostream>
#include <vector>

using namespace std;

vector<int> constructSum(const vector<int>& a, int target) {
    // Initialize dp array with empty vectors
    vector<vector<int>> dp(target + 1);

    // Base case: sum of 0 is achieved with an empty list
    dp[0] = {};

    for (int i = 1; i <= target; ++i) {
        for (int j = 0; j < a.size(); ++j) {
            if (i >= a[j] && !dp[i - a[j]].empty()) {
                dp[i] = dp[i - a[j]];
                dp[i].push_back(a[j]);
                break;  
            }
        }
    }

    // If dp[target] is still empty, it means the target sum cannot be achieved
    if (dp[target].empty() && target != 0) {
        return {};  
    }

    return dp[target];
}

int main() {
    vector<int> a = {3, 4, 5, 6};
    int target = 7;

    vector<int> result = constructSum(a, target);

    if (!result.empty()) {
        cout << "Combination to reach " << target << ": ";
        for (int num : result) {
            cout << num << " ";
        }
        cout << "\n";
    } else {
        cout << "No valid combination found to achieve the target sum\n";
    }

    return 0;
}
