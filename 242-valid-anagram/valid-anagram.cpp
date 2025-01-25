class Solution {
public:
    bool isAnagram(string s, string t) {
        int freq[26] = {0};
        for(int i=0; i<s.length(); i++){
            freq[s[i]-'a']++;
        }
        for(int i=0; i<t.length(); i++){
            freq[t[i]-'a']--;
        }
        for(int j=0; j<26; j++){
            if(freq[j] != 0) return false;
        }
        return true;
    }
};