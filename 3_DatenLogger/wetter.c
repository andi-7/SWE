
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    
    float data;   

    //File downloaden
    system("wget http://www.zamg.ac.at/ogd");

    //File öffnen
    FILE *zamg;
    zamg = fopen("/home/pi/SWE/3_DatenLogger/ogd", "r");
    
    fscanf(zamg,"%f",&data);

    fclose(zamg);
  
    FILE *myfile;
    myfile = fopen("wetter.log","a");
    fprintf(myfile, "%f", data);
       

    fclose(myfile);
  
    
    return 0;
}
