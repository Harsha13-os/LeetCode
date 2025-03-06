class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int l=0, r=0;
        int count=0;
        int m=g.size(), n=s.size();
        while(l<m && r<n){
            if(g[l]<=s[r]){
                r++;
                count++;
            }
            else{
                r++;
                continue;
            }
            l++;
        }
        return count;
    }
};