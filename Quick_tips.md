#### PRIME NUMBER
```
prime number can only be divided by the number itself or by one.

SOLUTION
Check the given number is divisible with 2 to n/2
```

#### FACTORIAL
```
Factorial of a non-negative integer is the multiplication of all positive integers smaller than or equal to n.

SOLUTION
n! = n*(n-1)*(n-2)*(n-(n-1))
```

#### ARMSTRONG NUMBER
```
A number which satisfy the condition that the sum of qube of the induidual number is to be equal to the original number

SOLUTION
if n = 153
then (1*1*1 + 5*5*5 + 3*3*3) is to be equal to 153

```

#### LEAP YEAR
```
A year is a leap year if the following conditions are satisfied,
1.The year is multiple of 400.
2.The year is multiple of 4 and not multiple of 100.

SOLUTION
check
if year divisible by 400: Then it is a leap year
else if divisible by 100: Then it is NOT a leap year
else if divisible by 4: Then it is a leap year
else : Then it is NOT a leap year

```

#### FIBONACCI SERIES
```
It is a series of numbers in which each number is the sum of the two preceding numbers:
0, 1, 1, 2, 3, 5, 8, 13, 21, 34,

SOLUTION
inside while loop
n1=0, n2=1
n=n1+n2
n1=n2
n2=n

if n == given number then it is in the series
```

#### PALINDROME
```
A word, phrase, or sequence that reads the same backwards as forwards

SOLUTION
separate the last digit one by one and push_back that to a string then convert it to interger and compare it with the given number
```
