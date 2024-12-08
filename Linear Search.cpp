#include <iostream>
#include <vector>
using namespace std;
int linearSearch(const vector<int>& arr, int target)
{
    for (int i = 0; i < arr.size(); i++)
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
    vector<int> array = {11, 7, 3, 5, 17, 13, 2};
    int target = 7;

    int result = linearSearch(array, target);

    if (result != -1)
    {
        cout << "Element found at index: " << result << endl;
    }
    else
    {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
