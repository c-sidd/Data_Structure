# Big-Omega Notation (Ω-Notation)

## 1. Definition
**Big-Omega notation (Ω)** is an asymptotic notation used to describe the **lower bound (best-case)** time or space complexity of an algorithm.

It tells us:
> The **minimum** time or space an algorithm will take for a given input size.

---

## 2. Symbol Meaning

### Big-Omega Symbol: **Ω(f(n))**

- **Ω** → Omega (lower bound)
- **f(n)** → Growth function
- **n** → Input size

Meaning:
> For sufficiently large `n`, the algorithm will take **at least f(n)** time or space.

---

## 3. Mathematical Definition
An algorithm is said to be **Ω(f(n))** if there exist positive constants **c** and **n₀** such that:

T(n) ≥ c · f(n) for all n ≥ n₀

Where:
- `T(n)` = actual time or space used
- `f(n)` = asymptotic function
- `c` = constant
- `n₀` = threshold value

---

## 4. Why Big-Omega is Used
- Describes **best-case performance**
- Shows **minimum guarantee**
- Useful for understanding algorithm limits
- Complements Big-O and Big-Theta

---

## 5. Big-Omega vs Big-O vs Big-Theta

| Notation | Meaning | Case |
|-------|--------|------|
| Big-O | Upper Bound | Worst |
| **Big-Ω** | Lower Bound | Best |
| Big-Θ | Tight Bound | Exact |

---

## 6. Examples

### Example 1: Linear Search (Best Case)

```cpp
if(arr[0] == key)
    return 0;
