#include <iostream>
using namespace std;

int Sum(int num){

    int sum = 0; // 9
    int cNum = num; // 14
    while(cNum){
        sum += cNum % 10;
        cNum  /= 10;
    }
    return sum;
}

int main(){

    cout << "Hello world\n";
    cout << Sum(123) << endl;

    return 0;
}