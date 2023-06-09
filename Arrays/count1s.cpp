class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        long long int ans = 0;
        long long int count = 0;

        int n = nums.size();
        int i = 0;
        while(i < n){
            if(nums[i] == 1){
                count = count + 1;
            }
            else
                count = 0;
            ans = max(ans,count);
            i++;
        }

        return ans;
    }
};
