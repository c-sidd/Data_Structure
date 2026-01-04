

## 1. What is Time Complexity?
Time Complexity measures **how the running time of an algorithm grows** with respect to the input size `n`.

It is expressed using **Big-O notation**, which represents the **worst-case growth rate**.

---

## 2. Order of Growth (FAST → SLOW)

```

O(1)
O(log log n)
O(log n)
O(√n)
O(n)
O(n log n)
O(n²)
O(n³)
O(2ⁿ)
O(n!)
O(nⁿ)

````

## 1. O(1) — Constant Time

### Meaning
Execution time **does not depend on input size**.

### Example
```cpp
int x = arr[0];
````

### Why O(1)?

* Only **one operation**
* No loops

✔ Fastest possible complexity

---

## 2. O(log log n) — Double Logarithmic Time

### Meaning

Input size reduces **very aggressively** (faster than log n).

### Example (conceptual)

```cpp
n = log(n);
```

### Used In

* Advanced algorithms
* Some number theory problems

✔ Very rare but extremely fast

---

## 3. O(log n) — Logarithmic Time

### Meaning

Input size is **halved each step**.

### Example: Binary Search

```cpp
int binarySearch(int arr[], int n, int key) {
    int l = 0, r = n - 1;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (arr[mid] == key) return mid;
        else if (arr[mid] < key) l = mid + 1;
        else r = mid - 1;
    }
    return -1;
}
```

### Why O(log n)?

Each iteration:

```
n → n/2 → n/4 → n/8 → ...
```

---

## 4. O(√n) — Square Root Time

### Meaning

Loop runs until `i * i <= n`.

### Example

```cpp
for(int i = 1; i * i <= n; i++) {
    cout << i;
}
```

### Why O(√n)?

* Loop runs √n times

Used in:

* Prime checking
* Factor problems

---

## 5. O(n) — Linear Time

### Meaning

Time grows **directly proportional** to input size.

### Example

```cpp
for(int i = 0; i < n; i++) {
    cout << arr[i];
}
```

### Why O(n)?

* Loop runs `n` times

---

## 6. O(n log n) — Linearithmic Time

### Meaning

Combination of **linear + logarithmic**.

### Example: Merge Sort

```cpp
// Divide: log n
// Merge: n
```

### Why O(n log n)?

* Divide input → log n
* Process each level → n

Used in:

* Merge Sort
* Heap Sort
* Quick Sort (average)

---

## 7. O(n²) — Quadratic Time

### Meaning

Nested loop with same input size.

### Example

```cpp
for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
        cout << i << j;
    }
}
```

### Why O(n²)?

* Outer loop → n
* Inner loop → n
* Total → n × n

Used in:

* Bubble Sort
* Selection Sort

---

## 8. O(n³) — Cubic Time

### Example

```cpp
for(int i = 0; i < n; i++)
    for(int j = 0; j < n; j++)
        for(int k = 0; k < n; k++)
            cout << i << j << k;
```

### Why O(n³)?

* Three nested loops

Used in:

* Matrix multiplication (naive)

---

## 9. O(2ⁿ) — Exponential Time

### Meaning

Each call makes **two recursive calls**.

### Example: Fibonacci

```cpp
int fib(int n) {
    if(n <= 1) return n;
    return fib(n-1) + fib(n-2);
}
```

### Why O(2ⁿ)?

* Each level doubles function calls

❌ Very slow
❌ Avoid for large `n`

---

## 12. O(n!) — Factorial Time

### Meaning

All possible permutations.

### Example

```cpp
// Generating all permutations
next_permutation(arr.begin(), arr.end());
```

### Used in:

* Traveling Salesman Problem (brute force)
* Permutation generation

❌ Extremely slow

---

## 13. O(nⁿ) — Power Time (Worst Possible)

### Meaning

Each of `n` elements has `n` choices.

### Used in:

* Brute-force combinational problems

❌ Practically unusable

---

## 14. Summary Table

| Complexity | Growth Speed | Practical? |
| ---------- | ------------ | ---------- |
| O(1)       | Fastest      | ✔          |
| O(log n)   | Very Fast    | ✔          |
| O(n)       | Fast         | ✔          |
| O(n log n) | Efficient    | ✔          |
| O(n²)      | Slow         | ⚠          |
| O(2ⁿ)      | Very Slow    | ❌          |
| O(n!)      | Worst        | ❌          |

---

## 15. How to Calculate Time Complexity (Rules)

1. Ignore constants

   ```
   O(2n) → O(n)
   ```

2. Nested loops multiply

   ```
   n × n → n²
   ```

3. Sequential blocks add

   ```
   O(n) + O(n) → O(n)
   ```

4. Drop lower order terms

   ```
   n² + n → n²
   ```

---

