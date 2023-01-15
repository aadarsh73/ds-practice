#include <iostream>
using namespace std;
#include <vector>

bool print(int ind, vector<int> &ds, int arr[], int n, int sum, int k){
    if(ind==n){
        if(sum==k){
        for(auto it:ds){
            cout<<it<<" ";
        }
        cout<<endl;
        return true;
        }
        else return false;
    }
    ds.push_back(arr[ind]);
    sum+=arr[ind];
    if (print(ind+1,ds,arr,n,sum,k) == true) return true;
    ds.pop_back();
    sum-=arr[ind];
    if (print(ind+1,ds,arr,n,sum,k) == true) return true;
    return false;
}

int main() {
    int arr[] = {3,1,2,0,4,5,-2};
    int n = 7;
    int k = 5;
    vector<int> ds;
    print(0,ds,arr,n,0,k);
    
    return 0;
}