#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);
	hash_table_set(ht, "betty", "cool");

/*
	hash_table_set(ht, "subgenera", "50 cent");
	hash_table_set(ht, "stylist", "many men");
*/	
	hash_table_delete(ht);
	return (EXIT_SUCCESS);
}
