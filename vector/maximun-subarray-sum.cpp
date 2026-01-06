#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> arr = {1, -2, 3, 4, 5};
    int maxSum = 0;
    for (int start = 0; start < arr.size(); start++)
    {
        int currentSum = 0;
        for (int end = start; end < arr.size(); end++)
        {
            currentSum += arr[end];
            maxSum = max(currentSum, maxSum);
        }
    }
    cout << "Maximun subarray sum: " << maxSum << "\n";
    return 0;
}