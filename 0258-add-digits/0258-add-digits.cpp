class Solution {
public:
    int addDigits(int num) {
        repeat:
        int sum=0;
        while(num>0){
            int rem=num%10;
            num=num/10;
            sum=sum+rem;
        }
        if(sum>9){
            num=sum;
            goto repeat;
        }
        return sum;
    }
};