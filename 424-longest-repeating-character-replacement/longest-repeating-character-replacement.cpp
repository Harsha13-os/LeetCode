class Solution {
public:
    int characterReplacement(string s, int k) {
        int hash[26] ={0};
        int l=0, r=0, n = s.length();
        int maxl = 0 , maxf = 0;
        while(r<n){
            hash[s[r]-'A']++;
            maxf = max(maxf, hash[s[r]-'A']);
            if(((r-l+1)-maxf) > k){
                hash[s[l]-'A']--;
                l = l+1;
            }
            if(((r-l+1)-maxf) <= k){
                maxl = max(maxl, r-l+1);
            }
            r++;
        }
        return maxl;
    }
};