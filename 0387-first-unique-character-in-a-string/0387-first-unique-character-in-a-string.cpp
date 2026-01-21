class Solution {
public:
    int firstUniqChar(string s) {
       int freq[26]={0};
        for(int i=0;i<s.length();i++){
            char ch=s[i];
            int index=ch-'a';
            freq[index]=freq[index]+1;
        }
        for(int j=0;j<s.length();j++){
            char ch=s[j];
            int index=ch-'a';
            if(freq[index]==1){
                return j;
            }
        }
        return -1;
    }
};