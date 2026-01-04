# Big-Theta Notation (Θ-Notation)

## 1. Definition
**Big-Theta notation (Θ)** is an asymptotic notation used to describe the **tight bound** of an algorithm’s time or space complexity.

It represents the **exact growth rate** of an algorithm by providing **both upper and lower bounds**.

In simple words:
> Big-Theta gives the **average or exact case performance** of an algorithm.

---

## 2. Symbol Meaning

### Big-Theta Symbol: **Θ(f(n))**

- **Θ** → Theta (tight bound)
- **f(n)** → Growth function
- **n** → Input size

Meaning:
> The algorithm grows **at the same rate as f(n)** for large values of `n`.

---

## 3. Mathematical Definition
An algorithm is said to be **Θ(f(n))** if there exist positive constants  
**c₁**, **c₂**, and **n₀** such that:

f(n) ≤ T(n) ≤ c₂ · f(n) for all n ≥ n₀


Where:
- `T(n)` = actual time or space used
- `f(n)` = asymptotic function
- `c₁` = lower bound constant
- `c₂` = upper bound constant
- `n₀` = threshold value

---

## 4. Why Big-Theta is Used
- Gives **precise performance**
- Shows **exact order of growth**
- More informative than Big-O alone
- Useful when algorithm behavior is predictable

---

## 5. Big-Theta vs Big-O vs Big-Omega

| Notation | Meaning | Bound |
|-------|--------|------|
| Big-O | Upper Bound | Worst case |
| Big-Ω | Lower Bound | Best case |
| **Big-Θ** | Tight Bound | Exact case |

---

## 6. Examples

### Example 1: Linear Search (Average Case)

```cpp
for(int i = 0; i < n; i++) {
    if(arr[i] == key) return i;
}
