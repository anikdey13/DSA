#include <iostream>
using namespace std;

int main()
{

    int arr[5];

    // input numbers
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    int smallestNum = 0;

    // find smallest number
    for (int i = 0; i < 5; i++)
    {
        if (i == 0)
        {
            smallestNum = arr[i];
            continue;
        }
        // if (arr[i] < smallestNum)
        // {
        //     smallestNum = arr[i];
        // }

        // shorter way to write the if condition
        smallestNum = min(arr[i], smallestNum);
    }

    cout << smallestNum;

    return 0;
}