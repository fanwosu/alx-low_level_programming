#include "main.h"

/**
 * _isalpha - this function checks for an alphabetic character
 *
 * @y: this is the character that is being checked.
 *
 * Return: returns 1 if y is an alphabet and 0 if y is not an alphabet
*/
int _isalpha(int y)
{
	return ((y >= 'a' && y <= 'z') || (y >= 'A' && y <= 'Z'));
}
