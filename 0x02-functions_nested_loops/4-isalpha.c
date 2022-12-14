#include <ctype.h>
#include <stdio.h>
/**
*_isalpha - thels if it is alphabetic
*@c: takes the char to analyse
* Return: return vbalue
*/
int _isalpha(int c)
{
int value;

if (isalpha(c))
{
value = 1;
}
else
{
value = 0;
}
return (value);
}
