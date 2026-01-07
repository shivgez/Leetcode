class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt=0;
        int final=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                cnt++;
                final=max(cnt,final);
            }
            else{
               final=max(cnt,final);
                cnt=0;

            }
          
        }
        return final;
    }
};