#include <stdio.h>
#include <stdlib.h>

#include "sort_tool.h"

#define ARRAY_SIZE 30

void		ia_print(int *apArray, unsigned aSize);

bool		pred_ascending(int, int);
bool		pred_descending(int, int);

typedef		enum
{
	E_SO_ASCENDING = 0,
	E_SO_DESCENDING,
	E_SO_END
}eSortOrder;

int 		main(void)
{
	int 		iarray[ARRAY_SIZE] = {0};

	for (int i = 0; i < ARRAY_SIZE; ++i)
		iarray[i] = rand() % 1000;

	ia_print(iarray, ARRAY_SIZE);
	

	pfCompare	pfa[E_SO_END];
	pfa[E_SO_ASCENDING] = pred_ascending;
	pfa[E_SO_DESCENDING] = pred_descending;
/*
	for (int i = 0; i < E_SO_END; ++i)
	{
		ia_bubble_sort(iarray, ARRAY_SIZE, pfa[i]);
		ia_print(iarray, ARRAY_SIZE);
	}*/

	ia_bubble_sort(iarray, ARRAY_SIZE, pfa[E_SO_DESCENDING]);
	ia_print(iarray, ARRAY_SIZE);

	ia_bubble_sort(iarray, ARRAY_SIZE, pfa[E_SO_ASCENDING]);
	ia_print(iarray, ARRAY_SIZE);

	/*

	ia_bubble_sort(iarray, ARRAY_SIZE, pred_ascending);
	ia_print(iarray, ARRAY_SIZE);

	ia_bubble_sort(iarray, ARRAY_SIZE, pred_descending);
	ia_print(iarray, ARRAY_SIZE);
*/
	return 0;
}

void		ia_print(int *apArray, unsigned aSize)
{
	for (unsigned i = 0; i < aSize; ++i)
		printf("[%i] ", apArray[i]);
	printf("\n\n");
}

bool		pred_ascending(int a, int b)
{
	return a >= b;
}

bool		pred_descending(int a, int b)
{
	return a < b;
}