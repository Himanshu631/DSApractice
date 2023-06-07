#include <iostream>

using namespace std;

// Find the nth root of a given number 
// TC = O(nlog(m*10^d))  where d is values between two integers


double multiply(double mid, int n){
    double ans = 1;
    for(int i=1;i<=n;i++){
        ans = ans*mid;
    }
    
    return ans;
}

int main()
{
    int m=256.0;
    int n=4;
    
    double low = 1.0;
    double high = m;
    double eps = 1e-7;
    double res;
    
    while((high - low) > eps) {
        double mid = (low + high) / 2.0; 
        if(multiply(mid, n) < m) {
            low = mid; 
        }
        else {
            high = mid; 
        }
    }
    
    
    cout<<low<<endl;

    return 0;
}

