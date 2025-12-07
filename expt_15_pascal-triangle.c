/* Expt 15: Pascal's Triangle
 * ver: 202512071146
 */

#include <stdio.h>


int
main(){
   unsigned int max_row = 0, row = 0;
   
   printf("Input number of rows: ");
   scanf("%u", &max_row);
   
   for(row = 0; row <= max_row; row++){
       unsigned int spaces = 0;
       unsigned int r = 0, prev = 1;
       
       for(spaces = 1; spaces <= (max_row - row); spaces++){
           printf("  ");
       }
       
       for(r = 0; r <= row; r++){
           prev = (r == 0)?(1):((prev*(row - r + 1))/r);
           
           printf("%4u", prev);
       }
       
       printf("\n");
   }
   
   return 0;
}