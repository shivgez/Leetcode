class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=1;
        int n=nums.size();
        vector<int> arr;
      
        for(int i=0;i<n;i++){
            if(nums[i]==count){
                count++;
            }
            else if(nums[i]>count){
                while(count<nums[i]){
                    arr.push_back(count);
                    count++;
                }
                count++;
            }
        }
        while(count<=nums.size()){
            arr.push_back(count);
            count++;
        }
        return arr;
    }
};