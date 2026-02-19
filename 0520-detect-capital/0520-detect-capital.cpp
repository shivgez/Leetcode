class Solution {
public:
    bool detectCapitalUse(string word) {
        bool flag=false;
        int n=word.length();
        int i=0;
      //  while(i<n){
        if(word[0]>='A'&& word[0]<='Z' &&   word[1]>='a' &&word[1]<='z'){
            
            for(int j=1;j<n;j++){
                if(word[j]>='a'&&word[j]<='z'){
                    flag=true;
                }
                else{
                    return false;
                }
            }
        }else{

            if(word[0]>='A' && word[0]<='Z'){
                
                for(int j=i;j<n;j++){
                if(word[j]>='A'&&word[j]<='Z'){
                    flag=true;
                }else{
                return false;
                }
                }
            }
            if(word[0]>='a' && word[0]<='z'){
                
                for(int j=i;j<n;j++){
                  if(word[j]>='a'&&word[0]<='z'){
                    flag=true;
                  }
                  else{
                    return false;
                }
                }
            }
        }
        return flag;
    }
};