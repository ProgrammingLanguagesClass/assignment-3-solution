## Problem 5 - Extra points
Write code to use **[binary search](https://en.wikipedia.org/wiki/Binary_search_algorithm)** to find an element `x` in a **sorted** `array` and return the index of that element.
If the element is not found, return -1.

Binary search starts at the middle of the array.
- If the current element == x, return current index
- If the current element > x, repeat with the left half of the array (before current element)
- If the current element < x, repeat with the right half of the array (after current element)
- Repeat until the element is found, or return -1 if the element is not found.


Edit the `binarySearch( )` function in the **main.cpp** file.
The function takes the `array` and its size `n` and the element `x` as input and returns the `result` as the output.

*Do not write a main function*.
Only edit the part marked with `// Write your code here`