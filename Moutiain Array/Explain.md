# Moutain Peek

### 1.Initialize variables start, end, and mid to 0, n-1, and the middle index of the array, respectively.

### 2.Use a while loop to perform binary search on the array until start becomes greater than or equal to end. Inside the loop, check if the element at the current middle index is less than the element at the next index. If it is, the maximum element must be in the right half of the array. Update start to mid + 1 to search in the right half of the array. Otherwise, the maximum element must be in the left half of the array. Update end to mid to search in the left half of the array. Compute the new middle index using the formula start + (end - start) / 2.

### 3.Return start, which is the index of the maximum element in the array.
