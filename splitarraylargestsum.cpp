// Problem: Split Array Largest Sum (LeetCode 410)
// Approach: Binary Search on Answer
// Time Complexity: O(n log n)
class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);
        while (low < high) {
            int mid = low + (high - low) / 2;
            
            if (canSplit(nums, k, mid)) {
                high = mid;  // try smaller answer
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
    bool canSplit(vector<int>& nums, int k, int maxSum) {
        int subarrays = 1;
        int currentSum = 0;
        
        for (int num : nums) {
            if (currentSum + num > maxSum) {
                subarrays++;
                currentSum = num;
            } else {
                currentSum += num;
            }
        }
        return subarrays <= k;
    }
};
