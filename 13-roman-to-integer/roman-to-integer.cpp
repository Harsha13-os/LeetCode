class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int>roman_int = {
            {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}
        };
        int total=0, n=s.length();
        for(int i=0; i<n; i++){
            int value = roman_int[s[i]];
            if(i<n-1 && value<roman_int[s[i+1]]){
                total -= value;
            }
            else{
                total += value;
            }
        }
        return total;
    }
};