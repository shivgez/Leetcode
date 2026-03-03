class Solution {
public:
    int firstocur(vector<int >& nums,int target){
    int n=nums.size();
    int push=-1;
        int low=0,high=n-1;
         while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                push=mid;
                high=mid-1;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return push;
    }
    int lastocur(vector<int >& nums,int target){
        int n=nums.size();
        int push=0;
        int low=0,high=n-1;
         while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                push=mid;
                low=mid+1;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return push;
    }
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        
        vector<int> vec;
        int first=firstocur(nums,target);
         int last=lastocur(nums,target);
        if(first==-1){
            return vec;
        }
       for(int i=first;i<=last;i++){
        vec.push_back(i);
       }
       
       return vec;
    }
};