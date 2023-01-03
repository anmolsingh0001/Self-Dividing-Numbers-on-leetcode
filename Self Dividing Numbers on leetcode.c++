class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>res;
        bool flag=true;
        for(int i=left;i<=right;i++){
            flag=true;
            // if(i%10==0) continue;
            int num=i;
            while(num){
                int digit = num%10;
                if(digit==0){
                    flag=false;
                    break;
                }
                if(i%digit!=0){
                    flag=false;
                    break;
                }
                num/=10;
            }
            if(flag)    res.push_back(i);
        }
        return res;
    }
};