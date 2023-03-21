

long long int floorSqrt(long long int x)
{
    // Your code goes here
    if (x == 0 || x == 1)
    {
        return x;
    }

    long long int start = 0;
    long long int end = x;
    long long int ans = -1;
    long long int mid;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (mid * mid == x)
        {
            return mid;
        }
        else if (mid * mid < x)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}
