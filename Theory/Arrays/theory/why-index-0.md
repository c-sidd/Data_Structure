
# Why Does Array Index Start From 0?

> **Array indexing starts from 0 because the index represents an offset from the base memory address of the array.**

---

## 1. Memory-Level Explanation (MOST IMPORTANT)

An array is stored in **contiguous memory locations**.

Let:

* `arr` → base address of the array
* `i` → index
* `size` → size of each element

### Address formula:

```
Address(arr[i]) = Base_Address + (i × size_of_element)
```

### For index 0:

```
Address(arr[0]) = Base_Address + (0 × size) = Base_Address
```

✔ No extra calculation
✔ Direct memory access

---

## 2. What If Index Started From 1?

If arrays started from index **1**, address formula would become:

```
Address(arr[i]) = Base_Address + ((i − 1) × size)
```

❌ Extra subtraction
❌ Extra CPU instruction
❌ Slower access

**Starting from 0 is more efficient at hardware level.**

---

## 3. Pointer Arithmetic (C / C++ Reason)

In C/C++:

```cpp
arr[i] == *(arr + i)
```

### For `i = 0`:

```cpp
arr[0] == *(arr + 0) == *arr
```

✔ Clean
✔ Logical
✔ No offset confusion

If indexing started at 1:

```cpp
arr[1] == *(arr + 1)   // wasted position
```

---

## 4. Mathematical Simplicity

Consider looping:

### Zero-based indexing

```cpp
for(int i = 0; i < n; i++)
```

### One-based indexing

```cpp
for(int i = 1; i <= n; i++)
```

✔ Zero-based avoids `<=`
✔ Fewer off-by-one errors
✔ Cleaner bounds checking

---

## 5. Historical Reason

* **C language** was designed close to hardware
* Array indexing was made equivalent to **pointer arithmetic**
* Many modern languages inherited this design:

  * C
  * C++
  * Java
  * Python
  * JavaScript

---

## 6. Performance Advantage

Zero-based indexing:

* Saves one arithmetic operation per access
* Faster in low-level systems (OS, compilers)

This matters in:

* Operating systems
* Embedded systems
* High-performance computing

---

## 7. Are There Languages with 1-Based Indexing?

Yes 👇

| Language         | Index Start |
| ---------------- | ----------- |
| MATLAB           | 1           |
| Fortran          | 1           |
| Lua (by default) | 1           |

These languages prioritize **mathematical convenience**, not hardware efficiency.

---

## 8. Visual Memory Example

Assume:

* Base address = 1000
* int size = 4 bytes

| Index | Address |
| ----- | ------- |
| 0     | 1000    |
| 1     | 1004    |
| 2     | 1008    |

Index = **distance from base**

---

**Array indexing starts from 0 because the index represents the offset from the base memory address of the array, making memory access efficient.**

---

**Because arrays are implemented using pointer arithmetic, and the first element is at offset 0 from the base address.**

---

