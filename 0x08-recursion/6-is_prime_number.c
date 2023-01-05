#include "main.h"
int factors(int, int);
/**
*is_prime_number - determine if number is prime
*
*@n: number to check if prime
*Return: 1 if prime else 0
*/
int is_prime_number(int n)
{
if (n < 2)
return (0);
else
return (factors(2, n));
}
/**
*factors - check if number of factors is equal to 2
*
*@f: factor to check
*@m: number to find factors for
*Return: 1 if number of factors is equal 2 else 0
*/
int factors(int f, int m)
{
if (f == m)
return (1);
else if ((m % f) == 0)
return (0);
else
return (factors(f + 1, m));
}
