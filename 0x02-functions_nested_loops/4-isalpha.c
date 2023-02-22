#include "main.h"

/**
 * _isalpha - checks for alphabetical character
 * Oc: the character to checked
 * return: 1 if the c is a letter , 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'));
}
