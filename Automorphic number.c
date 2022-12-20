#include <stdio.h> 
 #include <conio.h> 
 #include <math.h> 
   
 void main() 
 { 
     int num, sqr, temp, last; 
     int n =0; 
   
     printf("Enter a number \n"); 
     scanf("%d",&num); 
   
     sqr = num*num;  
     temp = num; 
   
      
     while(temp>0){ 
         n++; 
         temp = temp/10; 
     } 
   
      
     int den = floor(pow(10,n)); 
     last = sqr % den; 
   
     if(last == num) 
         printf("Automorphic number \n"); 
     else 
         printf("Not Automorphic \n"); 
   
     getch(); 
 }
