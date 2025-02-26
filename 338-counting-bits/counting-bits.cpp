class Solution {
public:
    int setBits(int n){
        int count =0;
        while(n>1)
        {
            if(n&1) count++;
            n = n>>1;
        }
        if(n == 1) count++;
        return count; 
    }

    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i=0; i<=n; i++){
            // ans.push_back(setBits(i));
            ans.push_back(__builtin_popcount(i));
        }
        return ans;
    }
};