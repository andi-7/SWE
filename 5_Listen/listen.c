#include <stdio.h>
#include <stdlib.h>
#include "listen.h"


	  
//----------Leere Liste erzeugen----------
SLIST_HEADER *createSList(void) {
	
	SLIST_HEADER *pHeader = malloc(sizeof(SLIST_HEADER));
	
	if(pHeader==NULL) {
			return NULL;
	} else {
		pHeader->len=0;
		pHeader -> First=NULL;
		pHeader -> Last=NULL;
	} 
}		  

//----------Erstes Element einfügen----------	
SLIST *insertFirst(SLIST_HEADER, int data) {
	
	SLIST *pNode = malloc(sizeof(SLIST));
	
	//Wenn die Liste noch leer ist:
	if(pHeader->Last==NULL) {
		pHeader->First=pNode;
		pHeader->Last=pNode;
		
	//Liste enthält bereits ein Element
	} else {
		pNode->Next=pHeader->First;
		pHeader-> First = pNode; 
	} 	
	
	//Übergebene Daten in das Element schreiben 
	//Länge der Liste um 1 erhöhen
	pNode -> Data = data;
	pHeader -> Len += 1;
}	
	
	
//----------Letztes Element einfügen----------
SLIST *insertLast(SLIST_HEADER, int data) {
	
	SLIST *pNode = malloc(sizeof(SLIST));
	
	//Wenn die Liste noch leer ist:
	if(pHeader->First==NULL) {
		pHeader->First=pNode;
		pHeader->Last=pNode;
		
	//Liste enthält bereits ein Element
	} else {
		pNode->Next=pHeader->Last;
		pHeader-> Last = pNode; 
	} 	
	
	//Übergebene Daten in das Element schreiben 
	//Länge der Liste um 1 erhöhen
	pNode -> Data = data;
	pHeader -> Len -= 1;
}		
	
//----------Liste ausgeben----------	
void printList(SLIST_HEADER) {
	
	int i;
	
	for(i=0; i<=(pHeader->len); i++) {
		printf("%d\n", pNode->data);
		pNode=pNode->next;
	}
}		
	
//----------Erstes Element löschen----------
void *deleteFirst(SList_Header) {
	
	SList *ptr;
	int wert;
	
	ptr=pHeader->First;
	wert = ptr->Data;
	
	if(ptr->len==0) {
		return 0;
	}
	
	
}



		   
//----------Main Funktion----------
int main(int argc, char *argv[]) {
   
    SLIST_HEADER *root = createSList();
    int i;
    
    if(root==NULL) {
		printf("ERROR!!");
		return EXIT_FAILURE;
	}	
	
    
    return 0;
}


