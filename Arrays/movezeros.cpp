void moveZeroes(vector<int>& nums) {
        int i = 0;
        int j = 0;
        
        int n = nums.size()-1;

        for(int s=0;s<=n;s++){
            if(nums[s] == 0){
                j = s;
                break;
            }
        }

        while(i<=n){
            if(nums[i] != 0 && nums[j] == 0 && i>j){
                int temp = nums[j];
                nums[j] = nums[i];
                nums[i] = temp;

                j++;
            }
            i++;
        }
    }
