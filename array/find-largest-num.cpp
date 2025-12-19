/*
 Find largest number/index in an array
*/

#include <iostream>
using namespace std;

int main()
{

    int size;
    cin >> size;
    int arr[size];
    int largestNum = INT8_MIN;
    int largestNumIndex = 0;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > largestNum)
        {
            largestNumIndex = i;
        }
        largestNum = max(arr[i], largestNum);
    }

    cout << largestNumIndex;
    return 0;
}