#include <stdio.h>
#include <string.h>

#define FILENAME (strrchr(__FILE__, '/') ? \
		strrchr(__FILE__, '/') + 1 : __FILE__)

/**
 * main - Prints the current file name
 *
 * Return: Always 0.
 */
int main(void)
{
	printf("%s\n", FILENAME);
	return (0);
}
