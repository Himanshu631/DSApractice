#include <iostream>

using namespace std;

int main()
{
    // Search in a rotated sorted array ( all are unique elements )
    
    // Solution - check for target 
    // If exists in sorted part we can check for low to target 
    // and for another part target to high
    
    int arr[10] = {8,9,10,1,2,3,4,5,6,7};
    
    int target = 2;
    
    int low = 0;
    int high = 9;
    int res = -1;
    
    while(low <= high){
        int mid = low + (high-low)/2;
        
        if (arr[mid] == target) {
            res = mid;
            break;
        }
        
        if(arr[low] <= arr[mid]){
            if(target <= arr[mid] && target >= arr[low]){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        
        else{
            if(target >= arr[mid] && arr[high] >= target){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
    }

    cout<<res<<endl;
    return 0;
}
