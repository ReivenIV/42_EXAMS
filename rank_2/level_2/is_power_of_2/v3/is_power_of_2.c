// done by GPT

int is_power_of_2(unsigned int n)
{
    if (n == 0)
        return 0;
    
    while (n % 2 == 0)
        n /= 2;
    
    return (n == 1);
}

// #include <stdio.h>
// int main(void)
// {
//     unsigned int test_cases[] = {0, 1, 2, 3, 4, 8, 16, 31, 32, 64, 127, 128, 255, 256, 1023, 1024};
//     int num_cases = sizeof(test_cases) / sizeof(test_cases[0]);

//     for (int i = 0; i < num_cases; i++)
//     {
//         unsigned int n = test_cases[i];
//         printf("is_power_of_2(%u) = %d\n", n, is_power_of_2(n));
//     }

//     return 0;
// }

