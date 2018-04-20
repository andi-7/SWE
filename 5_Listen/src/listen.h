#include <stdio.h>
#include <stdlib.h>

//Einfach verkettete Liste 
//(muss noch auf doppelt verkettet erweitert werden)


/*SLIST Knoten*/
typedef struct SList {
	int *Data;
	struct SList *Next;
} SLIST;


/*Kopf-Knoten, der die Listenlänge enthält*/
typedef struct SList_Header {
	int Len;
	SLIST *First, *Last;
} SLIST_HEADER;
