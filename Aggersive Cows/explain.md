# Aggressive Cows

You are given an array consisting of n integers which denote the position of a stall. You are also given an integer k which denotes the number of aggressive cows. You are given the task of assigning stalls to k cows such that the minimum distance between any two of them is the maximum possible.
The first line of input contains two space-separated integers n and k.
The second line contains n space-separated integers denoting the position of the stalls.

## Example 1:

Input:

n=5

k=3

stalls = [1 2 4 8 9]

Output:

3

Explanation:
The first cow can be placed at stalls[0],

the second cow can be placed at stalls[2] and

the third cow can be placed at stalls[3].

The minimum distance between cows, in this case, is 3,
which also is the largest among all possible ways.

## Example 2:

Input:

n=5

k=3

stalls = [10 1 2 7 5]

Output:

4

Explanation:
The first cow can be placed at stalls[0],

the second cow can be placed at stalls[1] and

the third cow can be placed at stalls[4].

The minimum distance between cows, in this case, is 4,
which also is the largest among all possible ways.

**Your Task:**

Complete the function int solve(), which takes integer n, k, and a vector stalls with n integers as input and returns the largest possible minimum distance between cows.

### Expected Time Complexity:

### O(n\*log(10^9)).

### Expected Auxiliary Space:

## O(1).

# Constraints:

2 <= n <= 10^5

2 <= k <= n

0 <= stalls[i] <= 10^9

# Explain

**Step- 1** First, the isPossible() function is defined as a private member function of the Solution class. This function takes in three arguments: a reference to a vector of integers stalls, an integer k representing the number of cows to be placed, and an integer mid representing the minimum distance between any two cows.

**Step- 2** Inside the isPossible() function, two integer variables are initialized: cowCount and lastPos. cowCount is set to 1 to represent the first cow that is placed, and lastPos is set to the position of the first stall in the vector.

**Step- 3** A for loop is used to iterate through all the stalls in the stalls vector.

**Step- 4** At each iteration of the loop, the function checks if the distance between the current stall and the last stall where a cow was placed is greater than or equal to the minimum distance mid.

**Step- 5** If the distance between the current stall and the last stall where a cow was placed is greater than or equal to mid, the cowCount variable is incremented and the current stall is marked as the last stall where a cow was placed.

**Step- 6** If the cowCount variable equals the value of k (i.e., all cows have been placed), the function returns true.

**Step- 7** If the loop completes without returning true, the function returns false.

**Step- 8** The solve() function is defined as a public member function of the Solution class. This function takes in three arguments: two integers n and k representing the number of stalls and the number of cows, respectively, and a reference to a vector of integers stalls representing the positions of the stalls.

**Step- 9** The stalls vector is sorted in ascending order using the sort() function.

**Step- 10** The variables s, maxi, and e are initialized. s is set to 0 to represent the starting point of the binary search. maxi is set to the maximum value in the stalls vector, and e is set to maxi to represent the end point of the binary search.

**Step- 11** The variable ans is initialized to -1 to represent the minimum distance between any two cows. This variable will be updated during the binary search.

**Step- 12** The variable mid is set to the midpoint between s and e.

**Step- 13** The binary search loop starts with a while loop that runs as long as s is less than or equal to e.

**Step- 14** At each iteration of the loop, the isPossible() function is called with the stalls, k, and mid arguments.

**Step- 15** If isPossible() returns true, the ans variable is updated to mid, and s is set to mid + 1 to search for a larger distance between cows.

**Step- 16** If isPossible() returns false, e is set to mid - 1 to search for a smaller distance between cows.

**Step- 17** At the end of each iteration, mid is updated to the midpoint between s and e.

**Step- 18** AWhen the while loop completes, the ans variable represents the minimum distance between any two cows that can be achieved. This value is returned by the solve() function.
