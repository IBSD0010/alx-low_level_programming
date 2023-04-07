#include "main.h"
/**
 * _strlen_recursion - retruns the length of a string 
 */
int _strlen_recursion(char *s)
{
int ibsd = 0;
if (*s)
{
ibsd++;
ibsd += _strlen_recursion(s + 1);
}
return (ibsd);
}
