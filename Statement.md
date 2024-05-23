# Naughty Johnny and his Mistake

## Problem Statement

Mr. Naughty Johnny, an ESC111 tutor, was having fun with his coding skills by converting all the numbers he knew (damn he knew a lot) starting from $1$, into binary. However, his professor didn't appreciate this mischief and asked him to convert all the numbers back to the decimal number system. While attempting to do so, Johnny mistakenly used base $3$ for the conversion instead of base $2$. For example, if the original number was $17$, its binary representation would be $10001$, and the final converted number using base $3$ would be $82$.

Given an integer $N$, your task is to determine if the list of final output numbers will contain $N$. If yes, then output the index of the number in the list indexed - $0$ starting from closest power of $3$ less than or equal to $N$. And if not, you also need to determine the closest integer less than $N$, which will be present in the list.

## Input

The first line contains a single integer $t$, the number of test cases.

The only line of each test case contains a single integer $N$.

## Output

For each test case, either print "YES" followed by its index in the given format, if the given number $N$ is present in the list, or print "NO" followed by a space and followed by the closest integer present in the list, which is less than $N$.

Print without the quotes.

The answer is case-insensitive.

## Constraints

1. $t$, the number of test cases ($1$ $≤$ $t$ $≤$ $108000$)
2. Integer $N$, ($1$ $≤$ $N$ $≤$ $4052555153018976267$)

### Sample Input

| Input |
| ----- |
| 3     |
| 102   |
| 85    |
| 94    |

| Output |
| ------ |
| NO 94  |
| YES 3  |
| YES 7  |

### Note

1. 10001 in the output list will be 1*($3^0$) + 1*($3^4$).

2. For $85$, $81$ is indexed $0$ and $85$ is indexed $3$ (Think!).
