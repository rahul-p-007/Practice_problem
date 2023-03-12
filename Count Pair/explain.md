**Given an array of N integers, and an integer K, find the number of pairs of elements in the array whose sum is equal to K.**

Example 1:

### Input:

N = 4, K = 6

arr[] = {1, 5, 7, 1}

Output: 2

Explanation:

arr[0] + arr[1] = 1 + 5 = 6

and arr[1] + arr[3] = 5 + 1 = 6.

### This approach is based on the following idea:

Check the frequency of sum – arr[i] in the arr
This can be achieved using Hashing.
Illustration:

Given arr[] = {1, 5, 7, -1}, sum = 6

Store the frequency of every element:

freq[arr[i]] = freq[arr[i]] + 1

freq[1] : 1

freq[5] : 1

freq[7] : 1

freq[-1] : 1

Initialise a variable count with 0 to find the required count of pairs

At index = 0: freq[sum – arr[0]] = freq[6 – 1] = freq[5] = 1

count = 1

At index = 1: freq[sum – arr[1]] = freq[6 – 5] = freq[1] = 1

count = 2

At index = 2: freq[sum – arr[2]] = freq[6 – 7] = freq[-1] = 1

count = 3

At index = 3: freq[sum – arr[3]] = freq[6 – (-1)] = freq[7] = 1

count = 4

The above also contains repeated pairs from front and last, i.e. pair (a, b) and (b, a) are considered as different pairs till now.

Therefore, we will reduce the count by half to determine the count of unique pairs.
count = count / 2 = 2

Therefore, required Number of pairs with given sum = 2

# Follow the steps below to solve the given problem:

## 1. Create a map to store the frequency of each number in the array. (Single traversal is required)

## 2. In the next traversal, for every element check if it can be combined with any other element (other than itself!) to give the desired sum. Increment the counter accordingly.

## 3. After completion of the second traversal, we’d have twice the required value stored in counter because every pair is counted two times. Hence divide the count by 2 and return.
