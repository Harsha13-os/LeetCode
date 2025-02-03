class Solution {
public:
    int maxDepth(string s) {
        int ans=0;
        int depth = 0;
        for(char x:s){
            if(x == '('){
                depth++;
            }
            else if(x == ')'){
                depth--;
            }
            ans = max(ans,depth);
        }
        return ans;
    }
};