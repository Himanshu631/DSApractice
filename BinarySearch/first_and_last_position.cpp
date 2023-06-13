class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int> res(2,-1);

        if(nums.size() == 0) return res;

        if(nums[0] > target) return res;

        int low = 0;
        int high = nums.size()-1;

        while(low<=high){
            int mid = low + (high-low)/2;

            if(target <= nums[mid]){
                high = mid - 1;
                if(nums[mid]==target){
                    res[0] = mid;
                    //res[1] -= 1;
                }    
            }
            else{
                low = mid + 1;
            }
        }

        low = 0;
        high = nums.size()-1;

        while(low<=high){
            int mid = low + (high-low)/2;

            if(target < nums[mid]){
                high = mid - 1;
                if(nums[high]==target){
                    res[1] = mid;
                    res[1] -= 1;
                }
            }
            else{
                low = mid + 1;
            }
        }

        if(nums[nums.size()-1]==target){
            res[1]=nums.size()-1;
        }

        return res;
    }
};
