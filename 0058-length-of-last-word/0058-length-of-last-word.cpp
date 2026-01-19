class Solution {
public:
    int lengthOfLastWord(string s) {
        int j=-1;
        int sum=0;
        int end=s.length()-1;
        while(end>=0 && s[end]==' '){
            end--;
        }
        for(int i=0;i<=end;i++){
            if(s[i]==' '){
                j=i;
            }
        }
        for(int k=j+1;k<=end;k++){
            if(s[k]!=' '){
            sum++;}
        }
        return sum;
    }
};