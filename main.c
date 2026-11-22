#include <stdio.h>

int gcd(int m, int x);

int main(void)
{
    int n;
    scanf("%d", &n);
    if (n > 9966990)
    {
        printf("NG");
        return 0;
    }
    printf("%d", gcd(9966990, n));
    return 0;
}

int gcd(int m, int x)
{
    long long first = m;
    long long second = x;
    if (first < 0)
        first = -first;
    if (second < 0)
        second = -second;
    for (; second != 0;)
    {
        long long remainder = first % second;
        first = second;
        second = remainder;
    }
    return (int)first;
}
