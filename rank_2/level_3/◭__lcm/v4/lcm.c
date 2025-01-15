// source : GPT4o

unsigned int lcm(unsigned int a, unsigned int b)
{
    if (a == 0 || b == 0)
        return 0;

    unsigned int max = (a > b) ? a : b;

    while (1)
    {
        if (max % a == 0 && max % b == 0)
            return max;
        ++max;
    }
}