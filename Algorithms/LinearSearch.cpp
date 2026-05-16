#include <iostream>
using namespace std;

bool linear_search(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
            return true;
    }
    return false;
}

int main()
{
    int arr[] = {1, 6, 4, 7, 3, 8, 5};
    int n = sizeof(arr) / sizeof(int);
    if (linear_search(arr, n, 8))
        cout << "Target Found";
    else
        cout << "Target Not Found";
}