#include <iostream>
using namespace std;

bool Binary_Search(int arr[], int low, int high, int target)
{
    if (low > high)
        return false;
    int mid = (low + high) / 2;
    if (target == arr[mid])
        return true;
    if (target < arr[mid])
        return Binary_Search(arr, low, mid - 1, target);
    else
        return Binary_Search(arr, mid + 1, high, target);
}

int main()
{
    int arr[] = {1, 6, 10, 32, 45, 64, 66};
    int n = sizeof(arr) / sizeof(int);
    if (Binary_Search(arr, 0, n - 1, 64))
        cout << "Target Found";
    else
        cout << "Target Not Found";
}