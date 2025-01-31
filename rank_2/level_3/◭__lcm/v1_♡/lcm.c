  // reference : v2
unsigned int	lcm(unsigned int a, unsigned int b)
{
  unsigned int random_nb;
  if (a == 0 || b == 0)
    return (0);
  
  // we take the bigger number from a/b to start our test to find the lcm.
  if (a > b)
    random_nb = a;
  else
    random_nb = b;
  
  // We do an infinit loop till the if is true to stop the function.
  while (1)
  {
    if (random_nb % a == 0 && random_nb % b == 0)
      return (random_nb);
    random_nb++;
  }
}

//   ---------------------
//   ::  test it dear   :: 
//   ---------------------
// //   #include <stdio.h>
// // // Function prototype
// // unsigned int lcm(unsigned int a, unsigned int b);

// // int main() {
// //     unsigned int a, b;

// //     // Test case 1
// //     a = 12;
// //     b = 18;
// //     printf("a:%i b:%i == %i\n", a, b, lcm(a, b)); //lcm ::: 36
// //     // Test case 2
// //     a = 5;
// //     b = 7;
// //     printf("a:%i b:%i == %i\n", a, b, lcm(a, b)); //lcm ::: 35
// //     // Test case 3
// //     a = 21;
// //     b = 6;
// //     printf("a:%i b:%i == %i\n", a, b, lcm(a, b)); //lcm ::: 42
// //     // Test case 4
// //     a = 0;
// //     b = 10;
// //     printf("a:%i b:%i == %i\n", a, b, lcm(a, b)); //lcm ::: 0
// //     return 0;
// // }