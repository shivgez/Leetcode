class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
       int  low=0;
        int high=nums.size()-1;
        int midd=0;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(target>nums[mid]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
            midd=mid;
           
        }
         if(target>nums[midd]){
            return midd+1;
         }
         else return midd;
    }
};