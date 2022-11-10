#include <stdio.h>
#include <math.h>
int fun(int n)
{
    if (n < 2)
    {
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int foo(int c)
{
    int S = c, i = 0;
    while (S > 0)
    {
        i++;
        S = S - i;
    }
    if (S < 0)
    {
        return (i - 1);
    }
    else
    {
        return i;
    }
}
int main()
{
    printf("fun(1) = %d\n", fun(1));
    printf("fun(2) = %d\n", fun(2));
    printf("fun(5) = %d\n", fun(5));
    printf("fun(6) = %d\n", fun(6));
    printf("\n");
    printf("foo(9) = %d\n", foo(9));
    printf("foo(10) = %d\n", foo(10));
    printf("foo(11) = %d\n", foo(11));
}