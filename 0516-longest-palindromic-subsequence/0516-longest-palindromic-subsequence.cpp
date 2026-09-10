class Solution {
public:
    int longestPalindromeSubseq(string s) {
        string str= s;
        reverse(str.begin(),str.end());
        int n=str.size();
        vector<vector<int>> dp(n+1,vector<int>(n+1,0));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){

                if(s[i-1]==str[j-1]) dp[i][j] = 1+ dp[i-1][j-1];
                else dp[i][j] = max(dp[i-1][j],dp[i][j-1]);

            }
        }

        int len= dp[n][n];
        string ans(len,'*');

        /* 
        int i=n,j=n ,curr=len-1;
        while(i>0 && j>0){
            if(s[i-1]==str[j-1]){
                ans[curr]=s[i-1];
                i--;
                j--;
                curr--;
            }
            else if(dp[i-1][j]>dp[i][j-1]){
                i--;
            }
            else j--;
        }
        */  // if asked to print the subsequence , we build it from dp table
        return len;
    }
};