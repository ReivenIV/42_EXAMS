#include <unistd.h>

unsigned char reverse_bits(unsigned char octet)
{
	int i = 0;
	int reversed = 0;

	while (i < 8)
	{
		reversed = (reversed << 1) | (octet & 1);
		octet = octet >> 1;
		i++;
	}
	return (reversed);
}
// Just for 
void print_bits(unsigned char octet)
{
	unsigned char bit;
	unsigned char bit_to_print;

	int i = 8;
	while (i > 0)
	{
		bit = (octet >> (i - 1)) & 1;
		bit_to_print = bit + '0';
		write(1, &bit_to_print, 1);
		i--;
	}
}
// :: Test it dear :: 
int main()
{
	unsigned char test = 15; // 00001111 in binary
	unsigned char result;

	write(1, "Original: ", 10);
	print_bits(test);
	write(1, "\nReversed: ", 11);
	result = reverse_bits(test);
	print_bits(result);
	write(1, "\n", 1);

	return 0;
}