#include "main.h"
/**
 * _puts_recursion - is function similaire to puts ()
*/
void _puts_recursion(char *s)
{
   if (*s)
   {
    _putchar(*s);
    _puts_recursions(s + 1);
   }
   else
	   _putchar('\n');
}
