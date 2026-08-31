class Solution {
public:
    int minBishopMoves(vector<int>& source, vector<int>& target) {
        int x= abs(source[0]-target[0]);
        int y= abs(source[1]-target[1]);
        if(x==y) return 1;
        if(x%2 != y%2) return -1;
        return 2;
    }
};