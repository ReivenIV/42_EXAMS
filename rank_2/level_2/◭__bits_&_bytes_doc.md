# Bits and Bytes

In C, bits and bytes can be manipulated using various data types, but unsigned char is often used for bitwise operations for the following reasons:

- **Size:** unsigned char is guaranteed to be 1 byte (8 bits) in size.
- **Portability:** Using unsigned char ensures that the code is portable across different platforms.
- **Range:** unsigned char ranges from 0 to 255, which is suitable for representing a byte without negative values.

## Quick reminder: 
- **Bit**: The smallest unit of data in a computer, represented as either 0 or 1.
- **Byte**: A group of 8 bits. For example, `01010101` is one byte.

### Bitwise Operators
C provides several operators to manipulate bits directly:

1. **AND (&)** : completed if   0:0=0  1:0=0  0:1=0  **1:1=1**
2. **OR (|):** : needs only 1.  0:0=0  1:0=1  0:1=1  1:1=1
3. **XOR (^):**
4. **NOT (~):**
5. **Left Shift (<<):** a=1111-1111    a<<3= 1111-1000 **x2**
6. **Right Shift (>>):**b=1111-1111    b>>3= 0001-1111 **/2**

| Bit 1 | Bit 2 | &                | operator 'OR'             | ^                         |
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
	- Shifts all bits in a number to the left by a specified number of positions.
	- New bits on the right are filled with 0s.
	- **Each left shift by one position is equivalent to multiplying the number by 2.**

```c
int a = 3;  // 00000011 in binary
int result = a << 3;  // 00011000 in binary, which is 24 in decimal 3*2=6*2=12*2=> 24
```

6. **Right Shift (>>):** Shifts all bits in a number to the right by a specified number of positions. New bits on the left depend on the sign of the number (0 for unsigned, sign bit for signed).

	- Shifts all bits in a number to the right by a specified number of positions.
	- For unsigned numbers, new bits on the left are filled with 0s.
	- For signed numbers, new bits on the left are filled with the sign bit (arithmetic shift) to preserve the sign of the number.
	- **Each right shift by one position is equivalent to dividing the number by 2 (and discarding the remainder).**
```c
int a = 1000;  // 1111101000 in binary
int result = a >> 2;  // 0011111010 in binary, which is 250 in decimal
```