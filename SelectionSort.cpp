#include <iostream>
#include <vector>
using namespace std;
void selectionSort(vector<int>& arr)
{
    int n = arr.size();

    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        if (minIndex != i)
        {
            swap(arr[i], arr[minIndex]);
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

    selectionSort(array);

    cout << "Sorted Array: ";
    printArray(array);

    return 0;
}
