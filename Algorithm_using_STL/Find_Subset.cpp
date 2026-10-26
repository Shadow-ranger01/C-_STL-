#include <iostream>
#include <vector>
#include <algorithm>

// Subset Sum Problem (NP-Complete): Can we find a subset that sums to target?
bool canPartition(const std::vector<int>& nums, int target) {
    // dp[i] will be true if a subset with sum 'i' is possible
    std::vector<bool> dp(target + 1, false);
    dp[0] = true; // Base case: sum of 0 is always possible

    for (int num : nums) {
        // Traverse backwards to avoid using the same element multiple times
        for (int j = target; j >= num; --j) {
            dp[j] = dp[j] || dp[j - num];
        }
    }

    return dp[target];
}

int main() {
    std::vector<int> nums = {3, 34, 4, 12, 5, 2};
    int target = 9;

    if (canPartition(nums, target)) {
        std::cout << "Found a subset with the target sum!\n";
    } else {
        std::cout << "No subset adds up to the target.\n";
    }
    return 0;
}
