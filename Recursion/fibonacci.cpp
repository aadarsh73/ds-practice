#include <iostream>
using namespace std;

// time complexity -> 2^n 

int fib(int n){
    if(n<=1){
        return n;
    }
    return fib(n-1)+fib(n-2);
}

int main() {
    for(int i = 0; i<11;i++){
            cout<<fib(i)<<" ";

    }
    return 0;
}