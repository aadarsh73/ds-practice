#include <iostream>
using namespace std;
#include <vector>

void print(int ind, vector<int> &ds, int arr[], int n, int sum, int k){
    if(ind==n){
        if(sum==k){
        for(auto it:ds){
            cout<<it<<" ";
        }
        cout<<endl;
        }
        return;
    }
    ds.push_back(arr[ind]);
    sum+=arr[ind];
    print(ind+1,ds,arr,n,sum,k);
    ds.pop_back();
    sum-=arr[ind];
    print(ind+1,ds,arr,n,sum,k);
}

int main() {
    int arr[] = {3,1,2,0,4,5,-2};
    int n = 7;
    int k = 5;
    vector<int> ds;
    print(0,ds,arr,n,0,k);
    
    return 0;
}