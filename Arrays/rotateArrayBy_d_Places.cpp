void reverser(vector<int>& arr,int low, int high){
        while(low<=high){
            int temp = arr[low];
            arr[low++] = arr[high];
            arr[high--] = temp;
        }
    }

void rotate(vector<int>& nums, int k) {
        int n = nums.size()-1;

        k=k%nums.size();

        reverser(nums,n-k+1,n);
        reverser(nums,0,n-k);
        reverser(nums,0,n);

}
