class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int even=0,odd=0;
        int mini_eve=INT_MAX,mini_odd=INT_MAX;
        int n=nums1.size();
        for(int i=0;i<n;i++){
            if(nums1[i]%2==0){
                even++;
                mini_eve=min(mini_eve,nums1[i]);
            }
            else{
                odd++;
                mini_odd=min(mini_odd,nums1[i]);
            }
        }
        if(even==n || odd==n) return true;
        for(int i=0;i<n;i++){
            if(nums1[i]%2==0 && nums1[i]<mini_odd) return false;
        }
        return true;
    }
};