#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> constructSum(const vector<int>& a, int target) {
    // Initialize dp array with vectors to store combinations
    vector<vector<vector<int>>> dp(target + 1);

    // Base case: sum of 0 is achieved with an empty list
    dp[0] = {{}};

    // Iterate over all sums from 1 to target
    for (int i = 1; i <= target; ++i) {
        // Iterate over all elements in array a
        for (int num : a) {
            // Check if the current number can be part of the sum i
            if (i >= num) {
                // Iterate over all combinations that sum up to (i - num)
                for (const auto& comb : dp[i - num]) {
                    // Make a copy of comb and add the current number to it
                    vector<int> newComb = comb;
                    newComb.push_back(num);
                    // Add the new combination to dp[i]
                    dp[i].push_back(newComb);
                }
            }
        }
    }

    // Return the combinations that sum up to the target
    return dp[target];
}

int main() {
    vector<int> a = {3, 4, 5, 6};
    int target = 7;

    vector<vector<int>> result = constructSum(a, target);

    if (!result.empty()) {
        cout << "Combinations to reach " << target << ":\n";
        for (const auto& comb : result) {
            for (int num : comb) {
                cout << num << " ";
            }
            cout << "\n";
        }
    } else {
        cout << "No valid combinations found to achieve the target sum\n";
    }

    return 0;
}
