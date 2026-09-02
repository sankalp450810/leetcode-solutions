class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int sum=0,curr=0;
        if(n==1) return 0;
        for(int x : nums) sum+=x;
        for(int i=0;i<n;i++){
            if(i==0){
                if(sum-nums[i]==curr)return 0;
            }
            else{
                curr+=nums[i-1];
                if(sum-curr-nums[i]==curr) return i;
            }
        }
        return -1;
    }
};