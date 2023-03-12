#include <bits/stdc++.h>
using namespace std;
long long maxSubarraySum(int A[], int n)
{

    unordered_map<int, int> mapping;
    int ans = 0;
    int sum = 0;
    mapping[0] = -1;
    for (int i = 0; i < n; i++)
    {
        sum += A[i];
        if (mapping.find(sum) != mapping.end())
        {
            ans = max(ans, i - mapping[sum]);
        }
        else
        {
            mapping[sum] = i;
        }
    }
    return ans;
}
int main()
{
    return 0;
}