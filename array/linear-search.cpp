#include <iostream>
using namespace std;

int main()
{

    int arr[] = {1, 4, 9, 8, 2, 3};
    int target;
    cin >> target;
    int result = -1;
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] == target)
        {
            result = i;
            break;
        }
    }
    cout << result << endl;
    return 0;
}