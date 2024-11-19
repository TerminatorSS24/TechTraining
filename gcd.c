#include <stdio.h>
int gcd(int a, int b)
{
    if (b == a)
        return a;
    return gcd(b, a % b);
}

int gcd_wo_rec(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = b % a;
        a = temp;
    }
    return a;
}
