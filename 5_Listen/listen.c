#include <stdio.h>
#include <stdlib.h>



/*SLIST Knoten*/
struct SList {
	void *Data;
	struct SList *Next;
	struct SList *Prev;
}; 
typedef struct SList SLIST;

/*Kopf-Knoten, der die Listenlänge enthält*/
struct SList_Header {
	int Len;
	SLIST *First, *Last;
};	
typedef struct Slist_Header SLIST_HEADER;
	

int main(int argc, char *argv[]) {
    
   
  
    return 0;
}


