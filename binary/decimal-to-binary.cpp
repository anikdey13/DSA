#include <iostream>
using namespace std;


int decToBin(int dec){

    int num = dec;
    int ans = 0;
    int pow = 1;
    while(num){
        int rem = num % 2;
        ans += pow * rem;
        num/=2;
        pow*=10;
    }
    return ans;
}

int main(){

    cout << decToBin(42) << "\n";
    return 0;
}