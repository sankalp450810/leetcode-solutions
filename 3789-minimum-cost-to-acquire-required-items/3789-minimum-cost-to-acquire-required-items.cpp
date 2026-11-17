class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long mini = min(need1,need2) , maxi=max(need1,need2);
        long long both = 1LL*maxi*costBoth;
        long long only_basic = 1LL*cost1*need1 + 1LL*cost2*need2;
        long long upto = 1LL*mini*costBoth + 1LL*cost1*(need1-mini) + 1LL*cost2*(need2-mini);

        return min({both,only_basic,upto});
    }
};