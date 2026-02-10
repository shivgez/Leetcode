class Solution {
public:
    bool help(int n,int x){
        if(x==n){
            return true;
        }
        if(x>n){
            return false;
        }
        if(x>n/3) return false;
        x=x*3;
       return help(n,x);
    }
    bool isPowerOfThree(int n) {
    if(n<=0) return false;
    return help(n,1);
    }
};