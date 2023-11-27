#include <stdio.h>
#include <limits.h>

int reverse_integer(int x)
{
    long long reversed_x = 0;

    while (x != 0) 
	{
        reversed_x = reversed_x * 10 + x % 10;
        x /= 10;
    }

    if (reversed_x < INT_MIN || reversed_x > INT_MAX) 
	{
        return 0;
    }

    return (int)reversed_x;
}

int main()
{
int s; 
    scanf("%d",&s);
    int reversed_number = reverse_integer(s);

    printf("Original: %d, Reversed: %d\n", s, reversed_number);

    return 0;
}
