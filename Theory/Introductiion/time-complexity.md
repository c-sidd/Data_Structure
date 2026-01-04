# Time Complexity

## 📌 What is Time Complexity?
**Time Complexity** measures the **amount of time an algorithm takes to run** as a function of the input size `n`.

It does **not** depend on:
- Computer speed
- Programming language
- Compiler

Instead, it depends on:
- Number of operations performed
- Growth of input size

---

## ❓ Why Do We Need Time Complexity?
Time complexity helps us:
- Compare different algorithms
- Choose the most efficient solution
- Predict performance for large inputs
- Avoid slow programs

Example:
- Algorithm A takes 1 second for 1,000 inputs
- Algorithm B takes 1 hour for the same input  
➡️ We clearly choose Algorithm A

---

## 📈 How Time Complexity is Measured?
Time complexity is measured by:
- Counting **basic operations** (comparisons, assignments, loops)
- Expressing them using **asymptotic notation**

---

## 🧮 Types of Time Complexity Cases

### 1️⃣ Best Case
Minimum time required for execution.

Example:  
Searching an element that is already at the first position.

---

### 2️⃣ Average Case
Average time taken for all possible inputs.

Example:  
Searching an element in the middle of an array.

---

### 3️⃣ Worst Case
Maximum time required for execution.

Example:  
Searching an element at the last position or not present.

> ⚠️ In most cases, we analyze **worst-case time complexity**.

---

## 🔢 Common Time Complexities

| Complexity | Name | Example |
|---------|------|--------|
| O(1) | Constant | Accessing array element |
| O(log n) | Logarithmic | Binary Search |
| O(n) | Linear | Linear Search |
| O(n log n) | Linearithmic | Merge Sort |
| O(n²) | Quadratic | Bubble Sort |
| O(2ⁿ) | Exponential | Recursive Fibonacci |
| O(n!) | Factorial | Traveling Salesman |

---


