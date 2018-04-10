#include <stdio.h>
#include <stdlib.h>


/*SLIST Knoten*/
typedef struct SList {
	void *Data;
	struct SList *Next;
	struct SList *Prev;
} SLIST;

/*Kopf-Knoten, der die Listenlänge enthält*/
typedef struct SList_Header {
	int len;
	SLIST *First, *Last;
} SLIST_HEADER;
