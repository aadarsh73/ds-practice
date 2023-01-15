#include <iostream>
using namespace std;

int print(int ind, int arr[], int n, int sum, int k){
    
    if(ind==n){
        if(sum==k){
            return 1;
        }else{
            return 0;
        }
    }
    
    sum+=arr[ind];

    int l = print(ind+1,arr,n,sum,k);

    sum-=arr[ind];

    int r = print(ind+1,arr,n,sum,k);
    
    return l+r;
    
    
    
}

int main() {
    int arr[] = {3,1,2,0,4,5,-2};
    int n = 7;
    int k = 7;
    cout<<print(0,arr,n,0,k);
    
    return 0;
}