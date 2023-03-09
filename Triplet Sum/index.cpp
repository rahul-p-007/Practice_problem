#include <bits/stdc++.h>
using namespace std;
int FindTriplet(int arr[], int n)
{
    sort(arr, arr + n);

    for (int i = 0; i < n; i++)

    {

        int sum = -arr[i];

        int start = i + 1;

        int end = n - 1;

        while (start < end)

        {

            if (arr[start] + arr[end] > sum)
                end--;

            else if (arr[start] + arr[end] < sum)
                start++;

            else
                return true;
        }
    }

    return false;
}
