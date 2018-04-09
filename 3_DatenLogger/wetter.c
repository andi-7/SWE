//
//  tempLog.c
//  DatenLogger



#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    
   


    //File erzeugen
    FILE *fptr;
    fptr = fopen("wetter.log", "w");
    
    if(NULL == fptr){
        perror("FILEERROR:");
        return 1;
    }
  

    system("wget http://www.zamg.ac.at/ogd");
       

    fclose(fptr);
  
    
    return 0;
}
