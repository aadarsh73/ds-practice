#include <iostream>
using namespace std;
int print(int i){
    if(i==1){
        return 1;
    }
    
    int sum = i *print(i-1);
    return sum;
}

int main() {
    cout<<print(4)<<endl;
    return 0;
}