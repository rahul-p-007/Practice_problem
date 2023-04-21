### Given an expression string x. Examine whether the pairs and the orders of {,},(,),[,] are correct in exp.

*For example, the function should return 'true' for exp = [()]{}{[()()]()} and 'false' for exp = [(]).*

**Note: The drive code prints "balanced" if function return true, otherwise it prints "not balanced".**

Example 1:

Input:

{([])}

Output: 

true

Explanation: 
{ ( [ ] ) }. Same colored brackets can form 
balanced pairs, with 0 number of 
unbalanced bracket.

## Follow the steps mentioned below to implement the idea:

### 1. Declare a character stack (say temp).Now traverse the string exp. 

### 2. If the current character is a starting bracket ( ‘(‘ or ‘{‘  or ‘[‘ ) then push it to stack.

### 3. If the current character is a closing bracket ( ‘)’ or ‘}’ or ‘]’ ) then pop from stack and if the popped character is the matching starting bracket then fine.

### Else brackets are Not Balanced.


### 4. After complete traversal, if there is some starting bracket left in stack then Not balanced, else Balanced.