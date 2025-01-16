### Bits and Bytes
- **Bit**: The smallest unit of data in a computer, represented as either 0 or 1.
- **Byte**: A group of 8 bits. For example, `01010101` is one byte.

### Bitwise Operators
C provides several operators to manipulate bits directly:

1. **AND (&)**
2. **OR (|):**
3. **XOR (^):**
4. **NOT (~):**
5. **Left Shift (<<):**
6. **Right Shift (>>):**

| Bit 1 | Bit 2 | & | (|) | ^ |
|-------|-------|------------------|---------------------------|---------------------------|
| 0     | 0     | 0                | 0                         | 0                         |
| 1     | 0     | 0                | 1                         | 1                         |
| 0     | 1     | 0                | 1                         | 1                         |
| 1     | 1     | 1                | 1                         | 0                         |

1. **AND (`&`)**: Compares each bit of two numbers and returns a new number. A bit is set to 1 only if both corresponding bits are 1.
   ```c
   int a = 5;  // 0101 in binary
   int b = 3;  // 0011 in binary
   int result = a & b;  // 0001 in binary, which is 1 in decimal
   ```

2. **OR (|):** Compares each bit of two numbers and returns a new number. A bit is set to 1 if at least one of the corresponding bits is 1.

```c
int a = 5;  // 0101 in binary
int b = 3;  // 0011 in binary
int result = a | b;  // 0111 in binary, which is 7 in decimal
```

3. **XOR (^):** Compares each bit of two numbers and returns a new number. A bit is set to 1 if only one of the corresponding bits is 1.

```c
int a = 5;  // 0101 in binary
int b = 3;  // 0011 in binary
int result = a ^ b;  // 0110 in binary, which is 6 in decimal
```

4. **NOT (~):** Inverts all the bits of a number.
```c
int a = 5;  // 0101 in binary
int result = ~a;  // 1010 in binary (in 4-bit representation), which is -6 in decimal (two's complement)
```

5. **Left Shift (<<):** Shifts all bits in a number to the left by a specified number of positions. New bits on the right are filled with 0s.
```c
int a = 5;  // 0101 in binary
int result = a << 1;  // 1010 in binary, which is 10 in decimal
```

6. **Right Shift (>>):** Shifts all bits in a number to the right by a specified number of positions. New bits on the left depend on the sign of the number (0 for unsigned, sign bit for signed).
```c
int a = 5;  // 0101 in binary
int result = a >> 1;  // 0010 in binary, which is 2 in decimal
```

