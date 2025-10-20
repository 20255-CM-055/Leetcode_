class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int n=operations.size();
        int cnt=0;

        for(string a:operations){
            if(a=="--X" || a=="X--"){
                cnt--;
            }
            else if(a=="X++" || a=="++X"){
                cnt++;
            }
        }

        return cnt;
    }
};