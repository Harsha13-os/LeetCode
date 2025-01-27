class Solution {
public:
    string frequencySort(string s) {
        map<char,int> mp;
        string ans;
        for(auto x:s){
            mp[x]++;
        }
        vector<pair<int, char>> v;
        for(auto &[ch,freq]: mp){
            v.push_back({freq,ch});
        }

        sort(v.rbegin(),v.rend());

        for(auto &[freq,ch]: v){
            ans += string(freq, ch);
        }
    return ans;
    }
};