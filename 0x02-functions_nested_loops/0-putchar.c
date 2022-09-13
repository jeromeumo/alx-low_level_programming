#include <unistd.h>
#include "main.h"

/*
 * main - entry point
 * Description: print putchar, follow by a new line
 * Return: alway 0 (success)
 */
int main(void)
{
	char word[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(word[i]);
	_putchar('\n');
	
	return (0);
}
