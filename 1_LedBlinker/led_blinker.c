#include <stdlib.h> 
#include <stdio.h> 
#include <wiringPi.h>

int main() {

 if (wiringPiSetup() == -1) {
    return 1;
 }

 pinMode(8, OUTPUT); 

 while(1) {
   digitalWrite(8,1);
   delay(500);
   digitalWrite(8,0);
   delay(500);
 }  
}

