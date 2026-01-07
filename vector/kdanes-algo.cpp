#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> arr = {3, -4, 5, 4, -1, 7, -8};
    int maxSum = INT32_MIN;
    int currSum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        currSum += arr[i];
        maxSum = max(currSum, maxSum);

        if (currSum < 0)
            currSum = 0;
    }
    cout << maxSum;
    return 0;
}