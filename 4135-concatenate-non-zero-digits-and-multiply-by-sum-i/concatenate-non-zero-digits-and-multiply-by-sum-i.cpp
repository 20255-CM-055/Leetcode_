class Solution {
public:
    long long sumAndMultiply(int n) {
       string s=to_string(n);
       string temp;

       for(char ch:s){
        if(ch!='0'){
            temp=temp+ch;
        }
       }

         long sum=0;
        for(int i=0;i<temp.size();i++){
            sum=sum+temp[i]-'0';
        }

        if(temp.empty()){
            return 0;
        }
        
        long  num=stoll(temp);
        
        return num*sum;
    }
};