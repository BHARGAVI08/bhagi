#include <stdio.h>
#include <math.h>

int main()
{
    int l, h, i, temp1, temp2, r, n = 0, result = 0;
    printf("Enter two numbers(intervals): ");
    scanf("%d %d", &l, &h);
    printf("Armstrong numbers between %d an %d are: ", l, h);
    for(i = l + 1; i < h; ++i)
    {
        temp2 = i;
        temp1 = i;
        while (temp1 != 0)
        {
            temp1 /= 10;
            ++n;
        }
        while (temp2 != 0)
        {
            r = temp2 % 10;
            result += pow(r, n);
            temp2 /= 10;
        }
        if (result == i)
        {
            printf("%d ", i);
        }
        n = 0;
        result = 0;
        }
    return 0;
}
