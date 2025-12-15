#include <stdio.h>

int countOnes(unsigned int num)
{
    int count = 0;

    while (num > 0)
    {
        if (num & 1)   // check last bit
            count++;

        num = num >> 1;   // move to next bit
    }

    return count;
}

int main()
{
    unsigned int n;

    printf("Enter a decimal number: ");
    scanf("%u", &n);

    printf("Number of 1 bits = %d\n", countOnes(n));

    return 0;
}
