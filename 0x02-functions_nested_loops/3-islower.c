#include "main.h"
#include <ctype.h>
/**
*_islower - tells if a data is lower or not
*@c: takes the input
* Return: retur
*/
int _islower(int c)
{
int value;
if (islower(c))
{
value = 1;

}
else
{
value = 0;
}
return (value);
}
