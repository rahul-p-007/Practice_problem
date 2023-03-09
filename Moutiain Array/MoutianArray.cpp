#include <bits/stdc++.h>
using namespace std;
int FindMaximum(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}
int main()
{
    int arr[] = {0, 1, 2, 3, 2, 1, 0};
    // int size = sizeof(arr) / sizeof(arr[0]);
    cout << FindMaximum(arr, 7) << endl;
    return 0;
}