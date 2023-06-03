#include <iostream>

using namespace std;

int lowerbound(int a[],int x){
    int low = -1;
    int high = 9;
    int i = -1;
    
    while(low<=high){
        int mid = low + (high-low)/2;
        
        if(a[mid] >= x){
            i = high;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    
    return i;
}

int upperbound(int a[],int x){
    int low = -1;
    int high = 9;
    int i = -1;
    
    while(low<=high){
        int mid = low + (high-low)/2;
        
        if(a[mid] > x){
            i = high;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    
    return i;
}

int main()
{
    int arr[10] =  {1,2,3,4,5,6,7,7,7,9};
    int num = 7;
    int first = -1;
    int last = -1;

    if(arr[0] > num || arr[9] < num){
        first = -1;
        last = -1;
    }
    else{
        first = lowerbound(arr,num);
        last = upperbound(arr,num);
        last = last - 1;
        
        if (arr[first] != num){
            first = -1;
            last =-1;
        }
    }


    cout<<first<<endl;
    cout<<last;


    return 0;
}

