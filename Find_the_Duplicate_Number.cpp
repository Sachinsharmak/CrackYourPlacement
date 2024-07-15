class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            int target = nums[i];
            int cnt = 0;
            for(int j=0;j<n;j++)
            {
                if(nums[j] == nums[i])
                {
                    cnt++;
                }
                if(cnt>1) return target;
            }
        }
        return -1;

    }
};
