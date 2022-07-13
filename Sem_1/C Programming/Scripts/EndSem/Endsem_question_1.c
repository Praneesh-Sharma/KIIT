#include <stdio.h>

long fibb(long n)
{
    if (n <= 2)
        return n - 1;
    return fibb(n - 1) + fibb(n - 2);
}

long sum(long *pr_2, int n)
{
    long s = 0;
    for (int i = 0; i < n; i++)
        s += pr_2[i];
    return s;
}

int main()
{
    int pr_1;
    printf("Enter Roll Number: ");
    scanf("%d", &pr_1);
    int m = pr_1% 10 + 1;
    int n = pr_1% 10 + 10;

    long pr_2[n - m + 1];

    printf("Fibonacci Numbers: \n");
    for (int i = 0; i < n - m + 1; i++)
    {
        pr_2[i] = fibb(m + i);
        printf("Element: %d = %ld\n", m + i, pr_2[i]);
    }

    printf("sum: %ld", sum(pr_2, n - m + 1));

    return 0;
}