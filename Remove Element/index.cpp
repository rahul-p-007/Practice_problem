#include <bits/stdc++.h>
using namespace std;
int RemoveElement(vector<int> nums, int val)
{
    // base case
    if (nums.size() == 0)
    {
        return -1;
    }
    int i = 0;
    for (int j = 0; j < nums.size(); j++)
    {
        if (nums[j] != val)
        {
            nums[i] = nums[j];
            i++;
        }
    }
    return i;
}
