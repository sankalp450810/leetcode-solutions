class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int ans=0;
        int n=arr.size();
        for(int i=1;i<=n;i+=2){
            int left=0;
            int sum=0;
            int right=0;
            while(right<n){
                sum+=arr[right];
                if(right-left+1==i){
                    ans+=sum;
                    sum-=arr[left];
                    left++;
                }
                right++;
            }
        }
        return ans;
    }
};