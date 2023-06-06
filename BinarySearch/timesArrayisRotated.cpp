#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Find how many times array is rotated.
    
    // Solution 1- O(n) -> linearly traverse the array and find the minimum element and return the index of the minimum number
    
    // Solution 2- O(log(n)) -> find the lowest using minimum in rotated sorted array concept and return the index
    
    
    int arr[10] = {6,1,2,3,4,5};
    
    int res = INT_MAX;
    int index=0;
    
    int low = 0;
    int high = 5;
    
    
    while(low<=high){
        
        int mid = low + (high-low)/2;
        
        if(arr[low]<=arr[high]){
            if(res>arr[low]){
                index = low;
                break;
            }
        }
        
        
        if(arr[low]<=arr[mid]){
            if(res>=arr[low]){
                res = arr[low];
                index = low;
            }
            low = mid + 1;
            
        }
        
        else{
            if(res>arr[mid]){
                res = arr[mid];
                index = mid;
            }
            high = mid - 1;
        }
        
    }
    
    std::cout << index << std::endl;
 
    return 0;
}

