#include "main.h"
int sqrt_calc(int, int);
/**
*_sqrt_recursion - calculate square root of a number
*
*@n: value parameter
*Return: square root
*/
int _sqrt_recursion(int n)
{
if (n == 0)
return (0);
else
return (sqrt_calc(1, n));
}
/**
*sqrt_calc - to check if the number is a sqaure
*@v: value paramater, always starts at 1
*@s: value parameter, square number
*Return: v if number is a square else -1
*/
int sqrt_calc(int v, int s)
{
if (v * v == s)
return (v);
else if (v * v > s)
return (-1);
else
return (sqrt_calc(v + 1, s));
}
