int majorityElement(int a[], int size)
{

    // your code here
    int vote = 0;
    int candidate = -1;
    for (int i = 0; i < size; i++)
    {
        if (vote == 0)
        {
            candidate = a[i];
            vote = 1;
        }
        else
        {
            if (candidate == a[i])
            {
                vote++;
            }
            else
            {
                vote--;
            }
        }
    }
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] == candidate)
        {
            count++;
        }
    }
    if (count > size / 2)
        return candidate;

    return -1;
}