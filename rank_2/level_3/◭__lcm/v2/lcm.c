// source : unknown but i saw several repos having it. 
unsigned int lcm(unsigned int a, unsigned int b)
{
	unsigned int n;	

	if (a == 0 || b == 0)
		return (0);
	if (a > b)
		n = a;
	else
		n = b;
	while (1)
	{
		if (n % a == 0 && n % b == 0)
			return (n);
		++n;
	}
}
//----------------------
// // #include <stdio.h>
// // // Function prototype
// // unsigned int lcm(unsigned int a, unsigned int b);

// // int main() {
// //     unsigned int a, b;

// //     // Test case 1
// //     a = 12;
// //     b = 18;
// //     printf("a:%i b:%i == %i\n", a, b, lcm(a, b));
// //     // Test case 2
// //     a = 5;
// //     b = 7;
// //     printf("a:%i b:%i == %i\n", a, b, lcm(a, b));
// //     // Test case 3
// //     a = 21;
// //     b = 6;
// //     printf("a:%i b:%i == %i\n", a, b, lcm(a, b));
// //     // Test case 4
// //     a = 0;
// //     b = 10;
// //     printf("a:%i b:%i == %i\n", a, b, lcm(a, b));
// //     return 0;
// // }