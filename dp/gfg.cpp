#include <bits/stdc++.h>
using namespace std;

int wordBreak(int n, string s, vector<string> &arr) {
    // Initialize dp array with false
    vector<bool> dp(n + 1, false);
    dp[n] = true;  // Base case: an empty suffix can be segmented

    // Iterate through the string in reverse
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j < arr.size(); j++) {
            int temp = arr[j].size();
            // Check if the substring from i of length temp matches arr[j]
            if (i + temp <= n && s.substr(i, temp) == arr[j]) {
                dp[i] = dp[i + temp];
                if (dp[i]) {  // If dp[i] is true, no need to check further
                    break;
                }
            }
        }
    }
    
    return dp[0];
}

int main() {
    string s = "q";
    vector<string> arr = {"jjivswmd", "q", "bx", "xmvtr", "bljptnsn", "wzqf", "mafadrrwso", "sbcnuv", "hffbsaq"};
    int result = wordBreak(s.length(), s, arr);
    cout << (result ? "True" : "False") << endl;
    return 0;
}
