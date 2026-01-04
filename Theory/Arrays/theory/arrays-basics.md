# Array Basics

## 1. Definition
An **array** is a **linear data structure** that stores a **fixed-size sequence of elements of the same data type** in **contiguous memory locations**.

Each element is accessed using an **index**, which usually starts from `0`.

---

## 2. Characteristics of Arrays
- Fixed size (in static arrays)
- Homogeneous elements (same data type)
- Stored in contiguous memory
- Supports random (direct) access
- Index-based access

---

## 3. Types of Arrays

### 3.1 One-Dimensional Array
Stores elements in a linear form.

```cpp - one - dimensional array
int arr[5] = {1, 2, 3, 4, 5};

### 3.2 two-dimensional array
int matrix[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
};

### 3.3 multi-dimensioal array
int cube[3][3][3];

---

### 3.4 Dynamic Array

Size is decided at runtime.

```cpp
int* arr = new int[n];
```

---

## 4. Memory Representation of Array

### 4.1 Contiguous Memory Allocation

All elements are stored next to each other in memory.

Example (int array):

```
Base Address = 1000
arr[0] → 1000
arr[1] → 1004
arr[2] → 1008
```

(Assuming 4 bytes per int)

---

### 4.2 Address Calculation Formula

#### 1D Array

```
Address(arr[i]) = Base + i × size_of_element
```

---

## 5. Array Indexing

* Index starts from `0`
* Last index = `size - 1`

Example:

```cpp
arr[0] = 10; // first element
arr[4] = 50; // last element
```

---

## 6. Basic Operations on Arrays

| Operation          | Description          | Time Complexity |
| ------------------ | -------------------- | --------------- |
| Access             | Get element by index | O(1)            |
| Traversal          | Visit all elements   | O(n)            |
| Insertion          | Add element          | O(n)            |
| Deletion           | Remove element       | O(n)            |
| Searching (Linear) | Find element         | O(n)            |
| Searching (Binary) | Sorted array         | O(log n)        |

---

## 7. Traversal Example

```cpp
for(int i = 0; i < n; i++) {
    cout << arr[i] << " ";
}
```

### Time Complexity

* O(n)

---

## 8. Advantages of Arrays

* Fast access using index
* Simple and easy to use
* Cache-friendly
* Efficient for fixed-size data

---

## 9. Disadvantages of Arrays

* Fixed size (static arrays)
* Costly insertion and deletion
* Memory wastage possible
* Cannot grow or shrink easily

---

## 10. Applications of Arrays

* Storing list of elements
* Matrices and tables
* Implementing stacks and queues
* Sorting and searching algorithms

---

## 11. Arrays vs Linked List

| Array             | Linked List       |
| ----------------- | ----------------- |
| Fixed size        | Dynamic size      |
| Contiguous memory | Non-contiguous    |
| Random access     | Sequential access |
| Faster access     | Slower access     |

---

## 12. Common Mistakes

* Accessing out-of-bound index
* Forgetting array size
* Confusing index with value

---

## 13. Summary

* Arrays store homogeneous data
* Fast access but fixed size
* Best for indexed operations

---

**An array is a linear data structure that stores elements of the same type in contiguous memory locations.**

```

---


