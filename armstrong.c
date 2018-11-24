#include <stdio.h>
int main()
{
    int n, a, r, result = 0;
    printf("Enter a three digit integer: ");
    scanf("%d", &n);
    a = n;
    while (a != 0)
    {
        r = a%10;
        result += r*r*r;
        a /= 10;
    }
    if(result == n)
        printf("yes.",n);
    else
        printf("no.",n);
     return 0;
}
