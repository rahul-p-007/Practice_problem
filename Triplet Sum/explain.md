# Find triplets with zero sum

### Given an array arr[] of n integers. Check whether it contains a triplet that sums up to zero.

Example 1:

**Input: n = 5, arr[] = {0, -1, 2, -3, 1}**

Output: 1

Explanation: 0, -1 and 1 forms a triplet
with sum equal to 0.

**Input: n = 3, arr[] = {1, 2, 3}**

Output: 0

Explanation: No triplet with zero sum exists

## Algorithm :

### 1. Sort the array in non-decreasing order using the sort function from the STL library.

`sort(arr, arr + n);`

### 2. Iterate through each element arr[i] in the array and try to find a pair of elements in the remaining subarray that add up to -arr[i]. To do this, initialize variables sum to -arr[i], start to i+1, and end to n-1.

`for (int i = 0; i < n; i++) {
    int sum = -arr[i];
    int start = i + 1;
    int end = n - 1;`

### 3. Use a while loop to perform a two-pointer search for a pair of elements that add up to sum. Inside the loop, check if the sum of the elements at the current start and end indices is greater than sum. If it is, move the end pointer to the left. Otherwise, if the sum of the elements is less than sum, move the start pointer to the right. Otherwise, we have found a triplet that adds up to zero, so return true.

`while (start < end) {
    if (arr[start] + arr[end] > sum) {
        end--;
    } else if (arr[start] + arr[end] < sum) {
        start++;
    } else {
        return true;
    }
}
`

### 4. If we've iterated through all elements and haven't found a triplet that adds up to zero, return false.
