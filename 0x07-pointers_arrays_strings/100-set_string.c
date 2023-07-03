#include "main.h"

/**
 * set_string - function set value of a pointer to a char
 *
 * @s: input pointer to another pointer
 * @to: input pointer char
*/

void set_string(char **s, char *to)
{
	*s = to;
}
