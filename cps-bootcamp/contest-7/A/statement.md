### Problem Statement

You are given $N$ strings, $S\_1, S\_2, \\dots, S\_N$, in this order.

Print $S\_N, S\_{N-1}, \\dots, S\_1$ in this order.

---

### Constraints

- $1 \\le N \\le 10$
- $N$ is an integer.
- $S\_i$ is a string of length between 1 and 10, inclusive, consisting of lowercase English letters, uppercase English letters, and digits.

---

### Input

The input is given from Standard Input in the following format:

```
N
S_1
S_2
.
.
.
S_N
```

---

### Output

Print $N$ lines. The $i$-th ($1 \\le i \\le N$) line should contain $S\_{N+1-i}$.

---

### Sample 1

**Input**

```
3
Takahashi
Aoki
Snuke
```

**Output**

```
Snuke
Aoki
Takahashi
```
