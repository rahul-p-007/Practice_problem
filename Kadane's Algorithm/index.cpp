#include <bits/stdc++.h>
using namespace std;
long long maxSubarraySum(int arr[], int n)
{

    int larget_sum = 0;
    int max_no = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        larget_sum += arr[i];
        if (larget_sum > max_no)
        {
            max_no = larget_sum;
        }
        if (larget_sum < 0)
        {
            larget_sum = 0;
        }
    }
    return max_no;
}
int main()
{
    return 0;
}