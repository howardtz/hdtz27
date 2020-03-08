#include <stdio.h>
#include <stdlib.h>
int a[1001];
int main()
{
    int n, i;
    scanf("%d", &n);
    a[1] = 1;
    for (i = 2; i <= n; i++)
    {
        a[i] = a[i - 1];
        if (i % 2 == 0)
            a[i] += a[i / 2];
    }
    printf("%d\n", a[n]);
    system("pause");
    return 0;
}