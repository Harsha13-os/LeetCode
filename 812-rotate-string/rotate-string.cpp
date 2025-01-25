class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s == goal) return true;
        string temp = s;
        int n = s.length();
        for(int i=1; i<n; i++){
            temp = temp.substr(1,n-1) + temp[0];
            if(temp == goal) return true;
        }
        return false;
    }
};