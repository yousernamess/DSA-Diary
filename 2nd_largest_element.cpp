class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        //your code goes here
        int max;
        int max2;
        if(nums[0]>nums[1]){
            max=nums[0];
            max2=nums[1];
        }
        else{
            max2=nums[0];
            max=nums[1];
        }
        for(int i = 2; i<nums.size(); i++){
            if (nums[i]>max){
                max2=max;
                max=nums[i];
            }
            else if ((nums[i]>max2) && nums[i]<max ){
                max2=nums[i];
            }
            else if(nums[i]<max2 && max==max2){
                max2=nums[i];
            }

        }

        if(max2==max){
            return -1;
        }
        else return max2;
      
    }
};
