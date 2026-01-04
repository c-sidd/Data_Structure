# Space Complexity

## 1. Definition
Space Complexity refers to the **total amount of memory space** required by an algorithm to execute completely, **as a function of input size (n)**.

It includes:
- Memory used by input data
- Memory used by variables, constants
- Memory used by function calls (recursion)
- Memory used by auxiliary data structures

---

## 2. Why Space Complexity is Important
- Determines whether a program can run on **memory-limited systems**
- Helps in writing **memory-efficient algorithms**
- Critical in **embedded systems, OS, mobile apps**
- Prevents **stack overflow** and **memory overflow**

---

## 3. Components of Space Complexity

### 3.1 Input Space
Memory occupied by the input data.

Example:
```cpp
int arr[n];   // Input space = O(n)
