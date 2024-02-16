#include "hash_tables.h"
/**
 * hash_table_print - prints hashtable
 * @h: the hash table you want to print
 */
void hash_table_print(const hash_table_t *h)
{

unsigned long int i;
hash_node_t *node;
short int comma = 0;

if (h == NULL)
	return;

putchar('{');
for (i = 0; i < h->size; i++)
{
	node = h->array[i];
	while (node != NULL)
	{
		if (comma)
			printf(", ");

		printf("'%s': '%s'", node->key, node->value);
		node = node->next;

		if (comma == 0)
			comma = 1;
	}
}
printf("}\n");
}
