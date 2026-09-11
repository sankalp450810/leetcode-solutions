class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int n=digits.size();
        vector<int> all(10,0);
        int count=0;

        for(int i=0;i<n;i++) all[digits[i]]++;

        for(int i=100;i<=999;i++){
            if(i%2==0){
                int curr=i;
                vector<int> freq(10,0);
                while(curr>0){
                    freq[curr%10]++;
                    curr/=10;
                }

                bool ispos=true;
                for(int j=0;j<10;j++){
                    if(freq[j]>all[j]){
                        ispos=false;
                        break;
                    }
                }
                if(ispos)count++;
            }
        }
        return count;
    }
};