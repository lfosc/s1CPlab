/* Expt 03: Add two integers
 * ver: 202511201941
 */
 
 #include <stdio.h>
 
 int
 main(){
     int num1, num2;
     
     printf("Input number 01: ");
     scanf("%d", &num1);
     printf("Input number 02: ");
     scanf("%d", &num2);
     
     printf("\n%d + %d = %d\n", num1, num2, (num1+num2));
     
     return 0;
 }