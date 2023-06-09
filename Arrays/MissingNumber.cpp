class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xor1 = 0;

        for(int i=1;i<=nums.size();i++){
            xor1 = xor1 ^ i ^ nums[i-1];
        }

        return xor1; 
    }
};
