class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int less=0 , equal=0;
        int n=nums.size();
        vector<int> vec;
        for(int i=0;i<n;i++){
            if(nums[i]<target) less++;
            else if(nums[i]==target) equal++;
        }
        for(int i=0;i<equal;i++){
            vec.push_back(less+i);
        }

        return vec;
    }
};