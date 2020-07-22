#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number : ");
    scanf("%d",&n);
    printf("Sum of digits is %d",sum(n));
    return 0;
}
int sum(int n)
{
    if (n == 0)
    return 0;
    return (n % 10 + sum(n / 10));
}
