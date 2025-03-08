class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        map<int,int> mpp;
        for(int i=0; i<bills.size(); i++){
            if(bills[i] == 5){
                mpp[5]++;
            }
            else if(bills[i] == 10){
                if(mpp[5]>0){
                    mpp[5]--;
                    mpp[10]++;
                }
                else return false;
            }
            else{
                if(mpp[5]>0 && mpp[10]>0){
                    mpp[5]--;
                    mpp[10]--;
                    mpp[20]++;
                }
                else if(mpp[5]>=3){
                    mpp[20]++;
                    mpp[5] -= 3;
                }
                else return false;
            }
        }
        return true;
    }
};