class Solution {
public:
    long long countCommas(long long n) {
        long long count=0,i=1000,j= 1; 
        while(i<=n){
            long long upper = i*1000 -1;
            long long end=min(n,upper);
            count+=(end-i+1)*j;
            i*=1000;
            j++;
        }
        return count;
    }
};