class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        string st1 = strs.front();
        string st2 = strs.back();
        int minlength = min(st1.length(),st2.length());

        int i=0;
        while(i<minlength && (st1[i]==st2[i])){
            i++;
        }
        return st1.substr(0,i); 
    }
};