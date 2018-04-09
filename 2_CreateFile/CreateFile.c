#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include <time.h>

int main(int argc, char *argv[]) {
    
    int i;
    int argument1;
    int argument2;
    int anzahl=100;
    int bereich=100;

    printf("\n");
    printf("Eingabeformat: ./CreateFile -n <Anzahl> -r <Bereich> <filename.txt> \n");
    printf("\n");  


 if(strcmp(argv[1],"-n")==0){ 
     
     argument1=atoi(argv[2]);
     argument2=atoi(argv[4]);

     anzahl=argument1;
     bereich=argument2;


     printf("Argument1: %d\n",argument1);
     printf("Argument2: %d\n",argument2);
  
     

    //File erstellen
    FILE *fptr;
    fptr = fopen(argv[5], "w");
    

    if(NULL == fptr){
        perror("FILEERROR");
        return 1;
    }
   
    for(i = 0; i < anzahl; i++){
        fprintf(fptr, "%d\n", rand()%bereich);
    }
         
               
    fclose(fptr);
 
} else if(strcmp(argv[1],"-h")==0) {
    printf("HELP!!\n");
    printf("\n");

  }   

    return 0;
}
