class Solution {
public:
    string reverseWords(string s) {
        string samp="";
        int n=s.length();
        int i=n-1;
        while(i>=0){
            while(i>=0 && s[i]==' ')i--;
            if(i<0) break;
            int end=i;
            while(i>=0 && s[i]!=' ') i--;
            int start=i+1;
            if(!samp.empty()){
                samp+=' ';
            }
            for(int j=start;j<=end;j++){
                samp=samp+s[j];
            }
         
        }
        return samp;
    }
};