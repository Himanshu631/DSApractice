#include <iostream>

using namespace std;

int main()
{
    // find the lower bound - return the index if not possible return -1
    // lower bound is the lowest index such that arr[i]>=num 
    
    int arr[12] = {1,2,3,4,7,9,10,11,12,15,16,20};
    
    int num = 0;
    
    int low = 0;
    int high = 11;
    int lb = high;
    while(low < high){
        int mid = low + (high-low)/2;
        
        if(arr[mid]<=num){
            low = mid+1;
        }
        else
            if(arr[mid]>num)
                high=mid-1;
        lb = high;    
    }
    
    cout<<lb<<endl;
    return 0;
}
