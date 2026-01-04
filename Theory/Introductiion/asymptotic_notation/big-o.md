# Big-O Notation (O-Notation)

## 1. Definition
**Big-O notation** is an asymptotic notation used to describe the **upper bound (worst-case)** time or space complexity of an algorithm.

It tells us:
> The maximum time or space an algorithm can take as the input size grows.

---

## 2. Symbol Meaning

### Big-O Symbol: **O(f(n))**

- **O** → Order of growth
- **f(n)** → Function representing growth rate
- **n** → Size of input

Meaning:
> As `n` becomes very large, the algorithm’s performance grows **no faster than f(n)**.

---

## 3. Mathematical Definition
An algorithm is said to be **O(f(n))** if there exist positive constants **c** and **n₀** such that:

T(n) ≤ c · f(n) for all n ≥ n₀

Where:
- `T(n)` = actual time/space used
- `f(n)` = asymptotic function
- `c` = constant multiplier
- `n₀` = threshold input size

---

## 4. Why Big-O is Used
- Machine-independent analysis
- Ignores constants and lower-order terms
- Helps compare algorithms
- Focuses on scalability

---

## 5. Common Big-O Complexities (Fast → Slow)

| Big-O | Name | Example |
|----|----|----|
| O(1) | Constant | Array access |
| O(log n) | Logarithmic | Binary Search |
| O(n) | Linear | Linear Search |
| O(n log n) | Linearithmic | Merge Sort |
| O(n²) | Quadratic | Bubble Sort |
| O(2ⁿ) | Exponential | Recursive Fibonacci |
| O(n!) | Factorial | Traveling Salesman |

---

## 6. Code Examples

### O(1) — Constant Time
```cpp
int x = arr[0];
