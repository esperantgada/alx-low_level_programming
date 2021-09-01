#include "main.h"
/**
*_isalpha - check if a character is alphabetical
*@c: character to be verified
*Return: return 0 or 1
*/
int _isalpha(int c)
{
if ((c >= '65n' && c <= '90') || (c >= '97' && c <= '122'))
return (1);

return (0);
}
