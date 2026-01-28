class Solution {
public:
    string reverseVowels(string s) {
     int n=s.length();
     int i=0,j=n-1;
     while(i<=j){
        char ch=tolower(s[i]);
        char sh=tolower(s[j]);
        if((ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')&&(sh=='a'||sh=='e'||sh=='i'||sh=='o'||sh=='u')){
            swap(s[i],s[j]);
            i++;
            j--;
        }
        else if(sh!='a'&&sh!='e'&&sh!='i'&&sh!='o'&&sh!='u'){
            j--;
        }
        else if(ch!='a'&&ch!='e'&&ch!='i'&&ch!='o'&&ch!='u'){
            i++;
        }
     }   
     return s;
    }
};