class Solution {
public:
    bool help(int n,int x){
        if(x==n) return true;
        if(x>n) return false;
        if(x>n/4) return false;
        return help(n,x*4);
    }
    bool isPowerOfFour(int n) {
        return help(n,1);

    }
};