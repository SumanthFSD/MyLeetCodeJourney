class Solution {
public:
    int reverse(int x) {
        try{
            int revNum = 0;
            int temp = abs(x);
            while(temp > 0){
                if(revNum > INT_MAX/10 || revNum < INT_MIN/10)
                    return 0;
                revNum = revNum*10 + (temp%10);
                temp = temp/10;
            }
            if(x < 0)
                return -1*(revNum);
            return revNum;
        }
        catch(...){
            return 0;
        }
    }
};