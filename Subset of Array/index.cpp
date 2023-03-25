#include <bits/stdc++.h>
using namespace std;

string isSubset(int a1[], int a2[], int n, int m)
{

    map<int, int> frequency;

    for (int i = 0; i < n; i++)
    {
        frequency[a1[i]]++;
    }

    for (int i = 0; i < m; i++)
    {
        if (frequency[a2[i]] > 0)
            frequency[a2[i]]--;
        else
        {
            return "No";
        }
    }
    return "Yes";
}