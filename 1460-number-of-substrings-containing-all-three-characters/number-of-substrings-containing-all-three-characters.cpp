class Solution {
public:
    int numberOfSubstrings(string s) {
        int count = 0;
        int ls[3] = {-1,-1,-1};
        for(int i=0; i<s.length(); i++){
            ls[s[i]-'a'] = i;
            count = count + (1+min(ls[0],min(ls[1],ls[2])));
        }
        return count;
    }
};