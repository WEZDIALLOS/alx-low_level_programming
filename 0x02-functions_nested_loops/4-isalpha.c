#include "main.h"

/**
 * _isalpa - Checks for alphabetic character
 * @c: The character to bechecked
 * Retuen: 1 for alphabetic character or 0 for anything else
 */

int _isalpha(int c)
{

if ((c > 65 && c <= 97) | | (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}