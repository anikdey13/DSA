#include <iostream>
using namespace std;


int main(){
    int myArr[5];

    // int size = sizeof(myArr);
    // cout << size;
    for(int i = 0; i <= sizeof(myArr) / 5; i++){
        cout << myArr[i] << "\n";
    }

    return 0;
}