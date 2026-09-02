class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int maxi=INT_MIN;
        int l=0,r=0,curr=0;
        while(r<n){
            if(nums[r]==0) curr++;
            if(curr>k){
                while(curr!=k){
                    if(nums[l]==0) curr--;
                    l++;
                }
            }
            maxi=max(maxi,r-l+1);
            r++;
        }
        return maxi;
    }
    // Logic count the max length subarray with atmost k 0, that will be the answer
};