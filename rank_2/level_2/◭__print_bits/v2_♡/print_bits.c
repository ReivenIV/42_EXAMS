// source unknown but i added some comments

#include <unistd.h>

void print_bits(unsigned char octet)
{
	unsigned char 	bit;

	int i = 8;
	while (i--)
	{
		bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
	}
}

/*
	*  :: Check v1 it can be more clear to understand :: 
	Explanation of bit = (octet >> i & 1) + '0';
	these part (octet >> i & 1) is to get it each step of the loop is 1 or 0.

	octet >> i means: 
		if we want the 5 number of the byte 
			- i=4, octet = 170 (1010-1010) 
			- octet >> 5 == 0000-0101
			- REMIDNER "&" == 0:1=0   0:0=0   1:0=0   1:1=0
			- 0000-0101 & 1 == 0000-0101 & 0000-0001 = 0000-0001 but &1 mask all the other 0
			- 1 + '0' = '1' 
*/

// ::Test me baby:: 
// int main() {
//     unsigned char test_value = 0; // min 0000-0000
//     print_bits(test_value);
//     write(1, "\n", 1);


//     test_value = 255; // max 1111-1111
//     print_bits(test_value);
//     write(1, "\n", 1);

//     test_value = 170; // 1010-1010
//     print_bits(test_value);
//     write(1, "\n", 1);
//     return 0;
// }
