#include <iostream>
using namespace std;

void print(int i, int arr[], int n){
    if(i>=n/2){
        return;
    }
    
    swap(arr[i],arr[n-i-1]);
    
    print(i+1,arr,n);
}

int main() {
    int arr[] = {5,74,13,25,1,99,87,777,888};
    int n = 9;
    
    print(0,arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}