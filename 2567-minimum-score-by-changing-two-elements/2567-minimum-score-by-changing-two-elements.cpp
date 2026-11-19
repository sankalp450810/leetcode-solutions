class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        int n=nums.size();
        if(n==3) return 0;
        sort(nums.begin(),nums.end());
        int min1 = nums[0];
        int min2 = nums[1];
        int max1 = nums[n-1];
        int max2 = nums[n-2];

        int changestart2 = max1 - nums[2];
        int changeend2 = nums[n-3]-nums[0];
        int changeends = nums[n-2] - nums[1];

        int ans = min(changestart2,min(changeend2,changeends));

        return ans;
    }
};