#include <iostream>
using namespace std;

int find_target(int arr[], int size, int target)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{

    int size = 7;
    int arr[size] = {1, 2, 3, 4, 5, 7, 8};
    int target;
    cin >> target;
    int result = find_target(arr, size, target);
    cout << result << endl;

    return 0;
}