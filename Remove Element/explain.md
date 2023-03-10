**Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The relative order of the elements may be changed.**

### Since it is impossible to change the length of the array in some languages, you must instead have the result be placed in the first part of the array nums. More formally, if there are k elements after removing the duplicates, then the first k elements of nums should hold the final result. It does not matter what you leave beyond the first k elements.

Return k after placing the final result in the first k slots of nums.

**Do not allocate extra space for another array. You must do this by modifying the input array in-place with O(1) extra memory.**

# Custom Judge:

_The judge will test your solution with the following code:_

`int[] nums = [...];` // Input array
`int val = ...;` // Value to remove
`int[] expectedNums = [...];` // The expected answer with correct length.
// It is sorted with no values equaling val.

`int k = removeElement(nums, val);` // Calls your implementation

assert k == expectedNums.length;
sort(nums, 0, k); // Sort the first k elements of nums
`for (int i = 0; i < actualLength; i++) {
    assert nums[i] == expectedNums[i];
}`
If all assertions pass, then your solution will be accepted.

**Example 1:**

Input: nums = [3,2,2,3], val = 3
Output: 2, nums = [2,2,_,_]
_Explanation: Your function should return k = 2, with the first two elements of nums being 2.
It does not matter what you leave beyond the returned k (hence they are underscores)._
**Example 2:**

Input: nums = [0,1,2,2,3,0,4,2], val = 2
Output: 5, nums = [0,1,4,0,3,_,_,_]
Explanation: Your function should return k = 5, with the first five elements of nums containing 0, 0, 1, 3, and 4.
Note that the five elements can be returned in any order.
It does not matter what you leave beyond the returned k (hence they are underscores).

## Constraints:

## 0 <= nums.length <= 100

0 <= nums[i] <= 50

0 <= val <= 100

# Algorithms :

Based on the provided code, the expected output for the input [3,2,2,3] with a value of 3 to remove would be 2, which means that after removing all occurrences of 3 from the input vector nums, the resulting vector would have a size of 2.

However, it seems like the code provided is not correctly removing all occurrences of the given value val from the input vector. Here's what is happening:

### Step 1 : The code initializes two pointers i and j to the first and second elements of the vector nums, respectively.It then iterates over the vector nums using the j pointer, checking if each element at index j is not equal to the given value val.

### Step 2 : If the element at index j is not equal to val, the code increments i, copies the element at index j to the position of i in the vector nums.If the element at index j is equal to val, the code does not increment i, and moves on to the next iteration of the loop.

### Step 3 : This approach would successfully remove one occurrence of val for each iteration of the loop where nums[j] is not equal to val. However, it fails to remove all occurrences of val when there are multiple consecutive occurrences of val in the input vector.

**For example, in the input vector [3,2,2,3] with a value of 3 to remove, the first iteration of the loop will leave the vector as [2,2,2,3], and the second iteration will leave the vector as [2,2,2,3], which is not the expected result.**

To fix this issue, we need to modify the loop to check all elements of the input vector, regardless of whether they are equal to val. Here's an updated version of the code:

**int removeElement(vector<int>& nums, int val)** {

    int i = 0;

    for (int j = 0; j < nums.size(); j++) {
        if (nums[j] != val) {
            nums[i] = nums[j];
            i++;
        }
    }
    return i;

}

In this updated version, we iterate over the input vector using the j pointer, checking if each element at index j is not equal to the given value val. If the element at index j is not equal to val, we copy it to the position of i in the vector nums, and then increment i. If the element at index j is equal to val, we do not copy it, and simply move on to the next iteration of the loop. This way, all occurrences of val will be removed from the input vector.
