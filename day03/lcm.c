#include <stdio.h>

int main()
{
    int n1, n2, i = 1, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    while (1)
    {
        lcm = n1 * i;

        if (lcm % n2 == 0)
            break;

        i++;
    }

    printf("LCM of %d and %d is %d", n1, n2, lcm);

    return 0;
}