class Solution {
public:
    int countDominantElements(vector<int>& nums) {
        int n=nums.size() ,count=0;
        if(n==1) return 1;
        for(int i=1;i<n-1;i++){
            if(nums[i]>= (nums[i-1]+nums[i+1]+1)/2) count++;
        }
        if(nums[0]>=nums[1]) count++;
        if(nums[n-1]>=nums[n-2]) count++;

        return count;
    }
};