#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> vec = {1, 2, 3, 4, 5};
    int length = vec.size();

    for (int start = 0; start < length; start++)
    {
        for (int end = start; end < length; end++)
        {
            for (int i = start; i <= end; i++)
            {
                cout << vec[i];
            }
            cout << " ";
        }
        cout << "\n";
    }

    return 0;
}