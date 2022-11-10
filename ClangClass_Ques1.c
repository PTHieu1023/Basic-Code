#include <stdio.h>
int main()
{
    printf("Enter n: ");
    int n, m;
    scanf("%d", &n);
    long F1 = 1, F2 = 0, result = 1;
    for (int i = 1; i <= n; i++)
    {
        F1 = F1 * i;
        F2 = F2 + i;
    }
    printf("F1(%d) = %d\n", n, F1);
    printf("F2(%d) = %d\n", n, F2);
    printf("Enter m: ");
    scanf("%d", &m);
    for (int i = 1; i <= m; i++)
    {
        result = result * n;
    }
    printf("Result: %d", result);
    return 0;
}