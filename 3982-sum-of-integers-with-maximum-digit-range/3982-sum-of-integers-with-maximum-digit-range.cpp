class Solution {
public:
    int digit_range(int n){
        int maxi=0;
        int mini=1e7;
        while(n>0){
            maxi=max(maxi,n%10);
            mini=min(mini,n%10);
            n/=10;
        }
        return maxi-mini;
    }
    int maxDigitRange(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++) maxi=max(maxi,digit_range(nums[i]));
        for(int i=0;i<n;i++){
            if(digit_range(nums[i])==maxi) ans+=nums[i];
        }
    
    return ans;
    }
};