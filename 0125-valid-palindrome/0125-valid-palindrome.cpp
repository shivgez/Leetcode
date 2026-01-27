class Solution {
public:
    bool isPalindrome(string s) {
        
        int n=s.length();
        vector<char> ch;
        for(int i=0;i<n;i++){
            if(s[i]>='A'&& s[i]<='Z'){
                ch.push_back(s[i]+32);
            }
            else if(s[i]>='a' && s[i]<='z'){
                ch.push_back(s[i]);
            }
            else if(s[i]>='0'&& s[i]<='9'){
                ch.push_back(s[i]);
            }
        }
        vector<char> vec=ch;
          int i=0;
        int j=vec.size()-1;
        while(i<j){
            swap(vec[i],vec[j]);
            i++;
            j--;
        }

        return vec==ch;
    }
};