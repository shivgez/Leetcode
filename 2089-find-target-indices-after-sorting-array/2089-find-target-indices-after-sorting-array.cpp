class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) { 
        vector<int> vec;
        int small=0,equal=0;
        for(int num: nums){
            if(num<target) small++;
            if(num==target) equal++;
        }
        for(int i=0;i<equal;i++){
            vec.push_back(small+i);
        }
       return vec;
    }
};