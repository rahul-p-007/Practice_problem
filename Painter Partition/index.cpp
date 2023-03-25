bool issolution(int arr[], int n, int k, long long mid)
{
    long long workercnt = 1;
    long long lengthsum = 0;

    for (int i = 0; i < n; i++)
    {
        if ((lengthsum + arr[i]) <= mid)
            lengthsum += arr[i];

        else
        {
            workercnt++;

            if (workercnt > k || arr[i] > mid)
                return false;

            lengthsum = arr[i];
        }
    }

    return true;
}

long long minTime(int arr[], int n, int k)
{
    long long ans = -1;
    long long sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    long long s = 0;
    long long e = sum;

    long long mid = s + (e - s) / 2;

    while (s <= e)
    {

        if (issolution(arr, n, k, mid))
        {
            ans = mid;
            e = mid - 1;
        }

        else
            s = mid + 1;

        mid = s + (e - s) / 2;
    }

    return ans;
}