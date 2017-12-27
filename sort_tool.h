#ifndef SORT_TOOL_H
#define SORT_TOOL_H

#include <stdbool.h>


//предикат
typedef bool (*pfCompare)(int, int);

void ia_bubble_sort(int *, unsigned, pfCompare);

#endif