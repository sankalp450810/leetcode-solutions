class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        int n=s.size();
        int cx=0 , cy=0;
        string str="";
        for(char c : s){
            if(c==x) cx++;
            else if(c==y) cy++;
            else str.push_back(c);
        }
        for(int i=0;i<cy;i++) str.push_back(y);
        for(int i=0;i<cx;i++) str.push_back(x);

        return str;
    }
};