class Solution {
public:
    string binary(int num){
        string ans;
        if(num == 0){
            return "00000000000000000000000000000000";
        }

        while(num>0 && num != 1){
            if(num%2 == 0) ans+='0';
            else ans+='1';
            num = num/2;
        }
        ans+='1';
        for(int i= ans.length(); i<32;i++){
            ans+='0';
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }

    int minBitFlips(int start, int goal) {
        string a = binary(start);
        string b = binary(goal);
        int count =0;
        for(int i=0; i<32; i++){
            if(a[i] != b[i]) count++;
        }
        return count;
    }
};
