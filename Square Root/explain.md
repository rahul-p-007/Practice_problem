# Square root of a number

Given an integer x, find the square root of x. If x is not a perfect square, then return floor(√x).

## Example 1:

Input:

n=5

Output: 2

Explanation: Since, 5 is not a perfect
square, floor of square_root of 5 is 2.

## Example 2:

Input:

x = 4

Output: 2

Explanation: Since, 4 is a perfect
square, so its square root is 2.

**Your Task:**

You don't need to read input or print anything. The task is to complete the function floorSqrt() which takes x as the input parameter and return its square root.
Note: Try Solving the question without using the sqrt function. The value of x>=0.

### Expected Time Complexity:

### O(log N)

### Expected Auxiliary Space:

## O(1).

# Constraints:

1 ≤ x ≤ 107

# Explain

**Using Binary Search Algorithms**

The function first checks if x is equal to 0 or 1, in which case it returns x itself as the square root. If x is greater than 1, the binary search algorithm is used to find the square root.

The binary search algorithm works by initializing a start variable to 0 and an end variable to x. It then sets an ans variable to -1 as an initial placeholder value for the answer. It repeatedly computes the midpoint mid between start and end and checks if mid\*mid equals x. If it does, then mid is the square root of x and is returned.

If (mid* mid) is less than x, then mid could be a possible square root, so ans is updated to mid and start is set to mid + 1, to search for a larger mid value that could still be the square root. If mid*mid is greater than x, then mid is too large to be the square root, so end is set to mid - 1, to search for a smaller mid value.

The algorithm continues the binary search until start becomes greater than end, at which point the answer in ans is returned.
