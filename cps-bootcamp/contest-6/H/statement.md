# A. Sereja and Dima

---

## Problem Statement

Sereja and Dima play a game with a row of $n$ cards. Each card has a distinct number. The players take turns picking a card, starting with **Sereja**. On each turn, a player can take either the **leftmost** or the **rightmost** card. The game ends when all cards are gone. The winner is the player with the highest sum of numbers on their cards.

Both players are **greedy**, meaning they will always choose the card with the larger number available on their turn.

Your task is to determine the final scores for Sereja and Dima, given the initial arrangement of cards and their greedy strategy.

---

## Input

The first line contains a single integer, $n$ ($1 \\le n \\le 1000$), which is the number of cards.

The second line contains $n$ space-separated integers, representing the numbers on the cards from left to right. These numbers are distinct and range from 1 to 1000.

---

## Output

Print two integers on a single line: Sereja's final score followed by Dima's final score.

---

## Examples

### Example 1

**Input**

```
4
4 1 2 10
```

**Output**

```
12 5
```

**Note:** In this example, Sereja takes the 10 and the 2. Dima takes the 4 and the 1.

### Example 2

**Input**

```
7
1 2 3 4 5 6 7
```

**Output**

```
16 12
```
