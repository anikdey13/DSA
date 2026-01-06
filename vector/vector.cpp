#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<char> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    cout << "size: " << vec.size() << endl;
    cout << "Capacity: " << vec.capacity() << endl;
    // for (char val : vec)
    // {
    //     cout << val << endl;
    // }
    return 0;
}