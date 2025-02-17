class Solution {
public:
    string minWindow(string s, string t) {
        if (s.empty() || t.empty()) return "";

        int l=0, r=0, minl = INT_MAX;
        map <char, int> hash; 
        int count = 0, index = -1;
        for(int i=0; i<t.length(); i++){
            hash[t[i]]++;
        }

        while(r<s.length()){
            if(hash[s[r]]>0){
                count++;
            }
            hash[s[r]]--;

            while(count == t.length()){
                if(r-l+1 < minl){
                    minl = r-l+1;
                    index = l;
                }
                hash[s[l]]++;
                if(hash[s[l]]>0) count--;
                l++;
            }
            r++;
        }
        return index == -1 ? "":s.substr(index, minl);
    }
};