class Solution {
public:
    bool isPalindrome(int x) {
        long long int  pali=0;
        int sum=x;;
       while(x>0){
        int h=x%10;
        pali=(pali*10)+h;
        x=x/10;

       }
       if(pali==sum) return true;
       else return false; 
    }
};