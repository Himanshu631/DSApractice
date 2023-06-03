#include <iostream>

using namespace std;

int main()
{
    int arr[10] =  {1,2,3,4,5,6,7,7,7,9};
    int num = 1;
    int first = -1;
    int last = -1;
    
    if(arr[0] > num || arr[9] < num){
        first = -1;
        last = -1;
    }
    else{
        for (int i=0; i<10;i++){
            if(arr[i] == num ){
                if(first == -1){
                    first=i;
                    last = i;
                }
                else{
                    last = i;
                }
            
            }
        }
    }
    
    
    cout<<first<<endl;
    cout<<last;
    

    return 0;
}
