#include <bits/stdc++.h>
using namespace std;
int Equilibrium(int arr[], int n)
{
    int total_sum = 0;
    for (int i = 0; i < n; i++)
    {
        total_sum += arr[i];
    }
    int left_sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (left_sum == total_sum - left_sum - arr[i])
        {
            return i + 1;
        }
        left_sum += arr[i];
    }
    return -1;
}
// brut force
int Equilibrium_2(int arr[], int n)
{
    int left_sum = 0;
    int right_sum = 0;
    for (int i = 0; i < n; i++)
    {

        // left sum
        for (int j = 0; j < i; j++)
        {
            left_sum += arr[j];
        }
        // right sum
        for (int j = 0; j < i + 1; j++)
        {
            right_sum += arr[j];
        }
        if (left_sum == right_sum)
        {
            return i;
        }
    }
    return -1;
}
