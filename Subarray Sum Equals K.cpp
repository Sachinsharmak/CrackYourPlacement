#include <vector>

using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        sort
        int count = 0;
        int sum = 0;
        int start = 0;

        for (int end = 0; end < nums.size(); ++end) {
            sum += nums[end];

            while (sum > k && start <= end) {
                sum -= nums[start];
                start++;
            }

            if (sum == k) {
                count++;
            }
        }
        
        return count;
    }
};
