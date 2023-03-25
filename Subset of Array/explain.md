# Array Subset of another array

Given two arrays: a1[0..n-1] of size n and a2[0..m-1] of size m.
Task is to check whether a2[] is a subset of a1[] or not. Both the arrays can be sorted or unsorted.

## Input:

a1[] = {11, 1, 13, 21, 3, 7}

a2[] = {11, 3, 7, 1}

### Output:

Yes

Explanation:

a2[] is a subset of a1[]

# Algorithms

### Store the frequency of the first array elements of arr1[] in the frequency array.

### Iterate on the arr2[] and look for its elements in the frequency array.

### If the value is found in the frequency array reduce the frequency value by one.

### If for any elements in arr2[] frequency is less than 1, we will conclude arr2[] is not the subset of arr1[],
