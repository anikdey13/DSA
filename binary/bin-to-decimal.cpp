#include <iostream>
using namespace std;

int binToDec(int bin){
    int pow = 1;
    int ans = 0;
    while(bin){
        int rem = bin % 10;
        ans+= rem * pow;
        pow*=2;
        bin /=10;
    }
    return ans;
}

int main(){

    cout << binToDec(110111) << "\n";
    return 0;
}