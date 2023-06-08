#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{   
    
    // union of two sorted array
    
    vector<int> nums1 = {};
    vector<int> nums2 = {2};
    vector<int> ans ;
    int i = 0;
    int j = 0;
        
    if(nums2.size() == 0){
        ans = nums1;
    }
    else if (nums1.size() == 0){
        ans = nums2;
    }
    else {
        while(i<nums1.size() && j<nums2.size()){
        
            if(nums1[i] <= nums2[j]){
                
                if(ans.size() == 0 || ans.back() != nums1[i]){
                    ans.push_back(nums1[i]);
                }
                i++;
            }
            else{
                
                if(ans.size() == 0 || ans.back() != nums2[j]){
                    ans.push_back(nums2[j]);
                }
                j++;
            }
        
        }
    
    
        if(j<nums2.size()){
            while(j<nums2.size()){
                if(ans.size() == 0 || ans.back() != nums2[j]){
                    ans.push_back(nums2[j]);
                    }
                j++;
            }    
        }
    
    
        if(i<nums1.size()){
            while(i<nums1.size()){
                if(ans.size() == 0 || ans.back() != nums1[i]){
                    ans.push_back(nums1[i]);
                }
            i++;
            }
        }
    
    }
    
    for(int a=0;a<ans.size();a++)
    cout<<ans[a]<<" ";
    return 0;
}

