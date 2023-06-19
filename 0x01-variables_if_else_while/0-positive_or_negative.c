/**
*File: 0-positive_or_negative.c
* Author: Mamudu Hamidu <drsennet@gmail.com>
* /
#include <stdlib.h> 
#include <time.h> 
 /* more headers goes there */ 
  
 /* betty style doc for function main goes there */ 
 int main(void) 
 { 
         int n; 
  
         srand(time(0)); 
         n = rand() - RAND_MAX / 2; 
         /* your code goes there */ 
         if (n > 0)
          {
                  /* Write stdio for n as positive*/
                   printf("%d is positive\n" );
           }
            else
           {
                   /* Write stdio for n as negative tive*/
                    printf("%d is negative\n" );
              }
         return (0); 
 }
