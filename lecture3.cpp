#include <iostream>
using namespace std;

int main(){

    int num; cin >> num;

    bool isPrime = true;

    for(int i = 2; i < num; i++){
        if(num % i == 0){
            isPrime = false;
            break;
        }
    }
    cout << (num ? "Prime Number": "NPN") << endl;
    return 0;
}