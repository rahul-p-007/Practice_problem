### We declare a function maxSubarraySum which takes an array of integers arr and its size n as inputs.

**We declare two integer variables larget_sum and max_no.**

**larget_sum will keep track of the maximum sum of the subarray ending at the current index.**

**max_no will keep track of the maximum sum of any subarray seen so far.**

`for(int i = 0; i<n; i++)`

{

    larget_sum += arr[i];
    if(larget_sum > max_no){
        max_no = larget_sum;
    }
    if(larget_sum < 0){
        larget_sum = 0;
    }

}`

### We iterate through the array arr from

### index 0 to n-1.

### For each index i, we add the value at that index to larget_sum. This is done to extend the maximum sum subarray ending at the previous index to include the current index.

### If larget_sum at the current index is greater than max_no seen so far, we update max_no to the current larget_sum.

### If larget_sum at the current index becomes negative, we reset larget_sum to 0. This is done because a negative value at the current index cannot contribute to the maximum sum subarray ending at the previous index.

### Finally, we return the maximum sum of any subarray seen so far, which is stored in max_no.
