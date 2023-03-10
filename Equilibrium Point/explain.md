**Given an array A of n positive numbers. The task is to find the first Equilibrium Point in an array.Equilibrium Point in an array is a position such that the sum of elements before it is equal to the sum of elements after it.**

_Note: Retun the index of Equilibrium point. (1-based index)_

##### Example 1:

Input:
n = 5
A[] = {1,3,5,2,2}
Output: 3

Explanation:  
equilibrium point is at position 3
as elements before it (1+3) =
elements after it (2+2).

##### Example 2:

Input:
n = 1
A[] = {1}
Output: 1

Explanation:
Since its the only element hence
its the only equilibrium point.

### Your Task:

The task is to complete the function equilibriumPoint() which takes the array and n as input parameters and returns the point of equilibrium. Return -1 if no such point exists.

**Expected Time Complexity: O(n)**

**Expected Auxiliary Space: O(1)**

### Constraints:

1 <= n <= 106

1 <= A[i] <= 108

# Algorithms:

_Here's a step-by-step explanation of the code:_

### Step 1 : int total_sum = 0; - This initializes the variable total_sum to 0. This variable will be used to calculate the total sum of all elements in the array.

### Step 2 :

`for (int i = 0; i < n; i++) { total_sum += a[i]; }` -

### This iterates over the array a and calculates the total sum of all elements in the array by adding each element to total_sum.

### Step 3 :

`int left_sum = 0;`

### This initializes the variable left_sum to 0. This variable will be used to keep track of the sum of elements to the left of the current index.

### Step 4 :

`for (int i = 0; i < n; i++) { ... } `

### This iterates over the array a again and checks for the equilibrium index by comparing left_sum to total_sum - left_sum - a[i], which is the sum of all elements to the right of the current index. If the two sums are equal, the current index is an equilibrium index and the function returns it. If the loop completes without finding an equilibrium index, the function returns -1.

### Step 4 : return -1; - This is the default return value if no equilibrium index is found.
