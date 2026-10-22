class Solution {
public:
    int sumCounts(vector<int>& nums) {
        unordered_set<int> freq;
        int count=0;
        int n=nums.size();

        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                freq.insert(nums[j]);
                count+= freq.size() * freq.size();
            }
            freq.clear();
        }

        return count;
    }
};