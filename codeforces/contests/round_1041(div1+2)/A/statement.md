### A. Mix Mex Max

---

### Problem Statement

You're given an array `a` of `n` non-negative integers. Some elements are missing and are represented by `-1`.

An array is considered **good** if for every subarray of three consecutive elements, `[a_i, a_{i+1}, a_{i+2}]` (where $1 \\le i \\le n-2$), the following condition holds:

$mex([a\_i, a\_{i+1}, a\_{i+2}]) = max([a\_i, a\_{i+1}, a\_{i+2}]) - min([a\_i, a\_{i+1}, a\_{i+2}])$

Here, **MEX** (Minimum Excluded) of a collection of non-negative integers is the smallest non-negative integer that is not in the collection. For example, $mex([2, 2, 1]) = 0$ because 0 is the smallest non-negative integer not present. $mex([0, 3, 1, 2]) = 4$.

You need to determine if it's possible to make the array **good** by replacing each `-1` with a non-negative integer.

---

### Input

The first line contains an integer `t` ($1 \\le t \\le 500$), the number of test cases.

For each test case:

- The first line contains a single integer `n` ($3 \\le n \\le 100$), the length of the array `a`.
- The second line contains `n` integers $a\_1, a\_2, \\dots, a\_n$ ($-1 \\le a\_i \\le 100$), the elements of the array. An element of `-1` indicates a missing value.

---

### Output

For each test case, output "YES" if it's possible to make the array **good**, and "NO" otherwise. The output is case-insensitive.

---

### Example

#### Input

```
8
3
-1 -1 -1
5
1 1 1 1 0
6
5 5 1 -1 -1 1
4
-1 -1 0 -1
4
-1 1 1 -1
3
3 3 -1
5
0 0 0 0 0
7
3 0 1 4 -1 2 3
```

#### Output

```
YES
NO
NO
NO
YES
YES
NO
NO
```

---

### Note on Examples

- **First Test Case:** We can replace all `-1` with `1`. For the subarray `[1, 1, 1]`, $mex([1, 1, 1]) = 0$, $max([1, 1, 1]) = 1$, and $min([1, 1, 1]) = 1$. The condition $0 = 1 - 1$ holds.

- **Second Test Case:** All elements are given. The condition is checked for all subarrays of size 3. It fails for `[a_3, a_4, a_5] = [1, 1, 0]`. $mex([1, 1, 0]) = 2$, $max([1, 1, 0]) = 1$, and $min([1, 1, 0]) = 0$. Since $2 \\ne 1 - 0$, the array is not **good**.

- **Third Test Case:** The first subarray `[a_1, a_2, a_3] = [5, 5, 1]` already violates the condition: $mex([5, 5, 1]) = 0$, $max([5, 5, 1]) = 5$, and $min([5, 5, 1]) = 1$. Since $0 \\ne 5 - 1$, it's impossible to make the array **good**.
