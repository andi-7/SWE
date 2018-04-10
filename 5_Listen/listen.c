#include <stdio.h>
#include <stdlib.h>
#include "listen.h"


	  
//Leere Liste erzeugen
SLIST_HEADER *createSList(void) {
	
	SLIST_HEADER *pHeader = malloc(sizeof(SLIST_HEADER));
	
	if(pHeader=NULL) {
			return NULL;
	} else {
		pHeader->len=0;
		pHeader -> First=NULL;
		pHeader -> Last=NULL;
	} 
}		  
	   
	   
int main(int argc, char *argv[]) {
    
  
  
    return 0;
}


