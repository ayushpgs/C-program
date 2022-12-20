#include<stdio.h> 
 #include<conio.h> 
  
 void  main() 
 { 
      
     int i; 
     int firstNumber,secondNumber; 
  
      
     int firstDivisorSum = 0; 
     int secondDivisorSum = 0; 
  
     
     printf("Enter two numbers to check if Amicable or not : "); 
     scanf("%d %d",&firstNumber,&secondNumber); 
  
      
     for(int i=1;i<firstNumber;i++){ 
      
         if(firstNumber % i == 0){ 
             firstDivisorSum = firstDivisorSum + i; 
         } 
     } 
  
      
     for(int i=1;i<secondNumber;i++){ 
         if(secondNumber % i == 0){ 
             secondDivisorSum = secondDivisorSum + i; 
         } 
     } 
  
      
     if((firstNumber == secondDivisorSum) && (secondNumber == firstDivisorSum)){ 
         printf("%d and %d are Amicable numbers\n",firstNumber,secondNumber); 
     } 
    else{ 
         printf("%d and %d are not Amicable numbers\n",firstNumber,secondNumber); 
     } 
 getch(); 
  
 }
