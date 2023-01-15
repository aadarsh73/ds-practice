#include <iostream>
using namespace std;

bool print(int i, string s, int n){
    if(i>=n/2){
        return true;
    }
    
    if(s[i]!=s[n-i-1]){
        return false;
    }
    return print(i+1, s, n);
}

int main() {
    int arr[] = {5,74,13,25,1,99,87,777,888};
    int n = 9;
    
    string s;
    cout<<"Enter the string : ";
    cin>>s;
    cout<<print(0,s,s.length());
    
    return 0;
}