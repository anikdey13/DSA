/*
    How the pass by reference works in c++
*/
#include <iostream>
using namespace std;

void func(int arr[])
{

    cout << "Size of the passed array: " << sizeof(arr) << "\n";
}

int main()
{

    int arr[] = {1, 2, 3, 4};
    cout << "Size of the original array: " << sizeof(arr) << "\n";
    // func(arr);

    return 0;
}