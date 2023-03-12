# Find duplicates in an array

**Given an array a[] of size N which contains elements from 0 to N-1, you need to find all the elements occurring more than once in the given array.**

### Note: The extra space is only for the array to be returned.

### Try and perform all operations within the provided array.

Example 1:

Input:
N = 4

a[] = {0,3,1,2}

Output: -1

Explanation: N=4 and all elements from 0
to (N-1 = 3) are present in the given
array. Therefore output is -1.
Example 2:

Input:

N = 5

a[] = {2,3,1,2,3}

Output: 2 3

Explanation: 2 and 3 occur more than once
in the given array.
Your Task:
Complete the function duplicates() which takes array a[] and n as input as parameters and returns a list of elements that occur more than once in the given array in a sorted manner. If no such element is found, return list containing [-1].

## Expected Time Complexity: O(n).

## Expected Auxiliary Space: O(n).

# Constraints:

1 <= N <= 105

0 <= A[i] <= N-1, for each valid i

# Here is how the code works:

**We start by declaring an empty vector called ans to store the results.**

**We iterate through the input array arr from index 0 to n-1.**

**For each element arr[i], we calculate its index by taking the modulo of its value with n. This is done to handle cases where arr[i] >= n. For example, if n=5 and arr[i]=11, then the index of the element would be 1 (11%5=1).**

**We then increment the value at the calculated index by n. This is done to mark the element as visited. For example, if the value at index 1 was 11, then it will become 16 after adding n=5 to it.**

**At the end of the first loop, all elements that occur more than once in the input array are marked with a value greater than or equal to 2n.**

**We iterate through the array again from index 0 to n-1.**

**For each index i, we check if the value at index i is greater than or equal to 2n. If yes, it means that the element with value i occurs more than once in the input array.**

**In this case, we push the index i to the ans vector.**

**Finally, we check if the ans vector is empty. If yes, it means that there are no elements in the input array that occur more than once. In this case, we return a vector containing a single element -1.**

**Otherwise, we return the ans vector containing the indices of elements that occur more than once in the input array.**
