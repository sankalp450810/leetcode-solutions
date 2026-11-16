class Solution {
public:
    int sum( vector<int>& costs , int curr ,int old, int index){
        int n = costs.size();
        if(index == n) return curr;
        int one = INT_MAX, two = INT_MAX, three = INT_MAX;

        if(index+1<=n) one = sum(costs,curr+ costs[index]+ (index+1-old)*(index+1-old) , index+1 , index+1);
        if(index+2<=n) two = sum(costs,curr+ costs[index+1]+ (index+2-old)*(index+2-old) , index+2 , index+2);
        if(index+3<=n) three = sum(costs,curr+ costs[index+2]+ (index+3-old)*(index+3-old) , index+3 , index+3);

        return min(min(one,two),three);
    }

    int memo(vector<int>&costs , int index , vector<int>&dp){
        int n=costs.size();
        if(index==n) return 0;

        if(dp[index]!=-1) return dp[index];
        int one=INT_MAX,two=INT_MAX,three=INT_MAX;

        if(index+1<=n)one=costs[index]+1+memo(costs,index+1,dp);
        if(index+2<=n)two=costs[index+1]+4+memo(costs,index+2,dp);
        if(index+3<=n)three=costs[index+2]+9+memo(costs,index+3,dp);

        return dp[index] = min({one, two, three});

    }
    int climbStairs(int n, vector<int>& costs){
        vector<int> dp(n+1, INT_MAX);
        dp[n]=0;

        for(int i=n-1;i>=0;i--){
            dp[i]=min(dp[i],costs[i]+1 +dp[i+1]);

            if(i+2<=n)dp[i]=min(dp[i],costs[i+1]+4+dp[i+2]);
            if(i+3<=n)dp[i]=min(dp[i],costs[i+2]+9+dp[i+3]);
        }

        return dp[0];
    }
};