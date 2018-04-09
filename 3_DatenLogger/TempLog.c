//
//  tempLog.c
//  DatenLogger



#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    
    float systemp, millideg;
    int n;
  
    FILE *myfile;
    myfile = fopen("temp.log", "w");
    
    FILE *thermal;
    thermal = fopen("/sys/class/thermal/thermal_zone0/temp","r");

    n = fscanf(thermal,"%f",&millideg);
    
    fclose(thermal);
    
    //Umrechnen
    systemp = millideg / 1000;

    printf("CPU Temperatur: %.4f Grad Celsius\n",systemp);
     
    //Temperatur in mein Programm schreiben  
    myfile = fopen("myCPUTemp.log", "a");
    fprintf(myfile, "%.4f Grad Celsius\n", systemp);

    fclose(myfile);
  
    
    return 0;
}
