#include <iostream>
using namespace std;


// patern printing
int main(){



    //patern 1
    // int n; cin >> n;

    // for(int i = 0; i < n; i++){
    //     for(int j = 1; j <= n; j++){
    //         cout << j << " "; 
    //     }
    //     cout << "\n";
    // }

    //patern 2

    int n; cin >> n;
    int num = 1;
    for(int i = 0; i < n; i++){
        for(int j = 1; j <= n; j++){
            cout << num << " ";
            num++;
        }
        cout << "\n";
    }




    return 0;
}