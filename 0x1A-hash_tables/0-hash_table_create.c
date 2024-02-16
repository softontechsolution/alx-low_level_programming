#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @sizee: size of the array
 *
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int sizee)
{
	hash_table_t *hash_table;
	unsigned long int j;

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);
	hash_table->size = sizee;
	hash_table->array = malloc(sizee * sizeof(hash_node_t *));
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}
	for (j = 0; j < sizee; j++)
		hash_table->array[j] = NULL;
	return (hash_table);
}
