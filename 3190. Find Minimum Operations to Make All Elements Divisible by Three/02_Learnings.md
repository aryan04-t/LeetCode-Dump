# Better readability of Main Logic:

```cpp
int remainder = num % x;
if (remainder != 0) {
    int mid = x / 2;
    acc += min(remainder, x - remainder);
}
return acc;
```