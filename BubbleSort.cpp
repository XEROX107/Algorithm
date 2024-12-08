#include <iostream>
#include <vector>
using namespace std;
void bubbleSort(vector<int>& arr)
{
    int n = arr.size();
    bool swapped;

    for (int i = 0; i < n - 1; i++)
    {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
        {
            break;
        }
    }
}
void printArray(const vector<int>& arr)
{
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> array = {64, 34, 25, 12, 22, 11, 90};

    cout << "Original Array: ";
    printArray(array);

    bubbleSort(array);

    cout << "Sorted Array: ";
    printArray(array);

    return 0;
}
