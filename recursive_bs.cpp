class Solution {
public:
    int fun(vector<int>& nums, int target, int high, int low){
        if (low>high) return -1;
        int mid = (high + low) / 2;
        if (nums[mid]==target){
            return mid;
        }
        else if(nums[mid] > target){
            return fun(nums, target,  mid-1,  low);
        }
        else{
            return fun( nums,  target, high, mid+1);
        }
        
    }
    int search(vector<int>& nums, int target) {
        int high = nums.size()-1;
        int low = 0;
        return fun(nums, target, high, low);
    }
};