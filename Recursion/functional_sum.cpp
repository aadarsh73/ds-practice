#include <iostream>
using namespace std;
int print(int i){
    if(i==0){
        return 0;
    }
    
    int sum = i + print(i-1);
    return sum;
}

int main() {
    cout<<print(11)<<endl;
    return 0;
}