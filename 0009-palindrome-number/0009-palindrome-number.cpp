class Solution {
public:
    bool isPalindrome(int x) {
        double pali=0;
        double sum=x;;
       while(x>0){
        double h=x%10;
        pali=(pali*10)+h;
        x=x/10;

       }
       if(pali==sum) return true;
       else return false; 
    }
};