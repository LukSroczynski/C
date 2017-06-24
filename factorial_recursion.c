#include <cs50.h>
#include <stdio.h>
#include <string.h>

long long factorial(long long n);

int main(void)
{
    long long get_factorial = get_int();
    printf("factorial of %lld \n", factorial(get_factorial));
}

long long factorial(long long n)
{
    if(n == 1)
        return 1;
    else
        return n * factorial(n-1);
        
}
