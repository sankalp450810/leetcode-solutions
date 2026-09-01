class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_set<int> seen,nott;
        for(int i=0;i<nums.size();i++) {
            if(i>0 && nums[i]!=nums[i-1]){
                if(seen.count(nums[i])) nott.insert(nums[i]);
            }
            seen.insert(nums[i]);
        }
        return seen.size()-nott.size();
    }
};