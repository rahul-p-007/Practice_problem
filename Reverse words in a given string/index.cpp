#include <bits/stdc++.h>
using namespace std;

string reverseWords(string S)
{
    // code here
    string ans;
    for (int i = S.size() - 1; i >= 0; i--)
    {
        if (S[i] == '.')
        {
            int j = i + 1;
            while (j < S.size() && S[j] != '.')
            {
                ans.push_back(S[j]);
                j++;
            }
            ans.push_back('.');
        }
    }
    int i = 0;
    while (i < S.size() && S[i] != '.')
    {
        ans.push_back(S[i]);
        i++;
    }
    return ans;
}