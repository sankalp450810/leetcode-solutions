class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string str;
        int count=0;
        if(9*num<sum) return "";
        while(sum>=9){
            str.push_back('9');
            count++;
            sum-=9;
        }
        if(sum!=0){
            str.push_back(sum+'0');
            count++;
        }

        while(count!=num){
            str.push_back('0');
            count++;
        }

        return str;
    }
};