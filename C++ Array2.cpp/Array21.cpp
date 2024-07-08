/*Q6 - Given a vector array nums, print the count of triplets [nums[i], nums[j], nums[k]] such
that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == x. Where k is an integer
given by the user.
Note: The solution set must not contain duplicate triplets and should not have 3 loops.*/

#include <iostream>
#include <vector>
#include <algorithm>

int countTriplets(std::vector<int>& nums, int x) {
    std::sort(nums.begin(), nums.end());
    int count = 0;
    for (int i = 0; i < nums.size() - 2; i++) {
        if (i > 0 && nums[i] == nums[i - 1]) continue; // skip duplicates
        int j = i + 1;
        int k = nums.size() - 1;
        while (j < k) {
            int sum = nums[i] + nums[j] + nums[k];
            if (sum == x) {
                count++;
                while (j < k && nums[j] == nums[j + 1]) j++; // skip duplicates
                while (j < k && nums[k] == nums[k - 1]) k--; // skip duplicates
                j++;
                k--;
            } else if (sum < x) {
                j++;
            } else {
                k--;
            }
        }
    }
    return count;
}

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int x;
    std::cout << "Enter the target sum: ";
    std::cin >> x;
    int count = countTriplets(nums, x);
    std::cout << "Count of triplets: " << count << std::endl;
    return 0;
}
