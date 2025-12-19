#include <iostream>
using namespace std;

// Not efficient in all case
int reverseNumber(int Num){

    int newNum = Num;
    int prevNum = 0;

    while(newNum){
        int lastDigit = newNum % 10;
        prevNum = lastDigit + prevNum * 10;

        newNum/=10;
    }
    return prevNum;
}

int main(){

    cout << reverseNumber(101010) << endl;
    return 0;
}