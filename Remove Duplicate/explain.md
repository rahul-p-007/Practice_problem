# Remove Duplicates from Sorted Array

**Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same.**

Since it is impossible to change the length of the array in some languages, you must instead have the result be placed in the first part of the array nums. More formally, if there are k elements after removing the duplicates, then the first k elements of nums should hold the final result. It does not matter what you leave beyond the first k elements.

Return k after placing the final result in the first k slots of nums.

Do not allocate extra space for another array. You must do this by modifying the input array in-place with O(1) extra memory.

Custom Judge:

The judge will test your solution with the following code:

int[] nums = [...]; // Input array
int[] expectedNums = [...]; // The expected answer with correct length

int k = removeDuplicates(nums); // Calls your implementation

assert k == expectedNums.length;
for (int i = 0; i < k; i++) {
assert nums[i] == expectedNums[i];
}
If all assertions pass, then your solution will be accepted.

**Input: nums = [1,1,2]Output: 2, nums = [1,2,_]
Explanation: Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively.**
It does not matter what you leave beyond the returned k (hence they are underscores).

### 1.Check if the input vector nums is empty. If so, return 0 as there are no duplicates to remove.

### 2.Initialize a variable i to 0. This will be the index of the last unique element in the updated vector.

### 3.Iterate over the vector starting from the second element (index 1). For each element, check if it's equal to the previous element at index i. If it's not equal, increment i and set the value of the element at index i to the current element value.

### 4.Return the length of the updated vector, which is i+1.
