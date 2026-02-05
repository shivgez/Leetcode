class Solution {
public:
    int heightChecker(vector<int>& heights) {
       /* vector<int> expected;
        int n=heights.size();
        expected=heights;
        int cnt=0;
        sort(expected.begin(),expected.end());
        for(int i=0;i<n;i++){
            if(expected[i]!=heights[i]){
                cnt++;
            }
        }
        return cnt; */
        vector<int> freq(101,0);
        int n=heights.size();
        for(int i=0;i<n;i++){
            freq[heights[i]]++;
        }
        int cnt=0,idx=0;
        for(int i=1;i<=100;i++){
            while(freq[i]>0){
            if(i!=heights[idx]){
                cnt++;
            }
            idx++;
            freq[i]--;
            }
        }
        return cnt;
    }
};