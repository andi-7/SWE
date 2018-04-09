#include <stdio.h>
#include <stdlib.h>
#include "string.h"

//Funktionsprototypen
void aufsteigend_sortieren(int arr[], int size);
void absteigend_sortieren(int arr[], int size);


int main(int argc, char *argv[]) {
    
   
   char *chars[10];
   int zahlen[10];
   int i;
   int j;
   int k;
   

    printf("\n");
    printf("Eingabeformat: ./SortFile <Option> <File-Name>  \n");
    printf("-h für Hilfe");
    printf("\n");  


//Aufsteigend sortieren
 if(strcmp(argv[1],"-a")==0){ 
     
    //File öffnen
    FILE *fptr;
    fptr = fopen(argv[2], "r");
    
    if(NULL == fptr){
        perror("FILEERROR");
        return 1;
    } else {
	  
	  //File einlesen
	 for(i=0; i<=10; i++) {
	  fscanf(fptr, "%d\n", &chars[i]);
	  }	
	}
	
	//Chars in Integer umwandeln
	 for(j=0; j<=10; j++) {
	 zahlen[i]=atoi(chars[i]);
	  }	
    
    //Sortieren        
    aufsteigend_sortieren(zahlen,10);        
            
    //Ausgeben auf Konsole
     for(k=0; k<=10; k++) {
	  printf("%d\n",zahlen[i]);
	  }	
	        
            
    //File schließen           
    fclose(fptr);
 
 //Absteigend sortieren
 } else if(strcmp(argv[1],"-d")==0){ 
     
    //File öffnen
    FILE *fptr;
    fptr = fopen(argv[2], "r");
    
    if(NULL == fptr){
        perror("FILEERROR");
        return 1;
    } else {
	  
	  //File einlesen
	 for(i=0; i<=10; i++) {
	  fscanf(fptr, "%d\n", &chars[i]);
	  }	
	}
	
	//Chars in Integer umwandeln
	 for(j=0; j<=10; j++) {
	 zahlen[i]=atoi(chars[i]);
	  }	
    
    //Sortieren        
    absteigend_sortieren(zahlen,10);        
            
    //Ausgeben auf Konsole
     for(k=0; k<=10; k++) {
	  printf("%d\n",zahlen[i]);
	  }	
	        
            
    //File schließen           
    fclose(fptr);   
    
    
//Hilfe
} else if(strcmp(argv[1],"-h")==0) {
    printf("\nOptionen:\n");
    printf("-a -> Aufsteigend sortieren\n");
    printf("-d -> Absteigend Sortieren\n");
    printf("\n");

  }   

    return 0;
}


//----------Funktionen----------

void aufsteigend_sortieren(int arr[], int size) {
	int buffer=0;
	int i;
	int j;
	
	for(i=0; i<size-1; i++) {
		for(j=i+1; j<size; j++) {
			if(arr[j]<arr[i]) {
				buffer=arr[i];
				arr[i]=arr[j];
				arr[j]=buffer;
			}		
		}	
	}	
	
}


void absteigend_sortieren(int arr[], int size) {
	int buffer=0;
	int i;
	int j;
	
	for(i=0; i<size-1; i++) {
		for(j=i+1; j<size; j++) {
			if(arr[j]>arr[i]) {
				buffer=arr[i];
				arr[i]=arr[j];
				arr[j]=buffer;
			}		
		}	
	}	
	
}
	
	








