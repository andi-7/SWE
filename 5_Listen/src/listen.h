#include <stdio.h>
#include <stdlib.h>

//Doppelt verkettete Liste

/*SLIST Knoten*/
typedef struct ListNode {
	int Data;
	struct ListNode *Next;
	struct ListNode *Prev;
} LIST_NODE;

