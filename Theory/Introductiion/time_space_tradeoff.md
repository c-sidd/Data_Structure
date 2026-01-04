# Time–Space Tradeoff

## 1. Definition
The **Time–Space Tradeoff** is a fundamental concept in computer science which states that:
> An algorithm can be made faster by using more memory, or can use less memory by taking more time.

In simple words:
- **Saving time costs space**
- **Saving space costs time**

---

## 2. Why Time–Space Tradeoff is Important
- Helps in choosing the **best algorithm** for a problem
- Critical in **system design**
- Used in **competitive programming**
- Important for **real-world applications** like databases, caching, and AI

---

## 3. Basic Idea
For the same problem:
- One solution may use **extra memory** to run faster
- Another solution may use **less memory** but run slower

The choice depends on:
- Memory availability
- Time constraints
- Input size

---

## 4. Classic Examples

### 4.1 Linear Search vs Hashing

#### Linear Search
```cpp
for(int i = 0; i < n; i++) {
    if(arr[i] == key) return i;
}

Time Complexity: O(n)

Space Complexity: O(1)
