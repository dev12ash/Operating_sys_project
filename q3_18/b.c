#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
 
int main () {
 
   system("./aout &");
   system("ps -l | grep -w aout");
   sleep(3);
   system("kill -9 $(ps -l | grep -w Z | tr -s ' ' | cut -d ' ' -f 5 )");
   sleep(7);
   printf("\n\nupdated list of processes with their states\n\n");
   system("ps -l | grep -w aout");
   return(0);
} 