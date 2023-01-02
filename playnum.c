#include <stdio.h>/*program to play with number and understand various operations*/
 
#include<conio.h>
#include<math.h>
 
int abundantnum(int z)
  {
      {
    int num, sum = 0;
    printf("enter number:");
    scanf("%d",& num);
    
    for(int i = 1; i < num; i++)
    {
        if(num % i == 0) 
            sum = sum + i; 
    }
if(sum > num){
 printf("%d is an Abundant Number\n",num);
 printf("Num: %d\nSum: %d\nAbundance: %d", num, sum, (sum-num)); 
} else
 printf("%d is not a Abundant Number",num); 
} 
getch();
}
  
  int ambical(int z) 
{
     int i; 
     int firstNumber,secondNumber; 


     int firstDivisorSum = 0; 
     int secondDivisorSum = 0; 


     printf("Enter two numbers to check if Amicable or not : "); 
     scanf("%d %d",&firstNumber,&secondNumber); 


     for(int i=1;i<firstNumber;i++){ 

         if(firstNumber % i == 0){ 
             firstDivisorSum = firstDivisorSum + i; 
         } 
     } 


     for(int i=1;i<secondNumber;i++){ 
         if(secondNumber % i == 0){ 
             secondDivisorSum = secondDivisorSum + i; 
         } 
    
    } 


     if((firstNumber == secondDivisorSum) && (secondNumber == firstDivisorSum)){ 
         printf("%d and %d are Amicable numbers\n",firstNumber,secondNumber); 
     } 
    else{ 
         printf("%d and %d are not Amicable numbers\n",firstNumber,secondNumber); 
     } 
 getch(); 

 }
  int armstrong(int z)
 {     
 int n,r,temp,sum=0,a;     
 printf("enter the number=");     
 scanf("%d",&n);     
 temp=n;     
 while(n>0)     
 {     
 r=n%10;     
 sum=sum+(r*r*r);     
 n=n/10;     
 }     
 if(temp==sum){     
 printf("armstrong  number ");    
 }  
 else  {   
 printf("not armstrong number");    
 } 
  getch();   
 }
  int automorhic(int z)
  { 
     int num, sqr, temp, last; 
     int n =0; 
   
     printf("Enter a number \n"); 
     scanf("%d",&num); 
   
     sqr = num*num;  
     temp = num; 
   
      
     while(temp>0){ 
         n++; 
         temp = temp/10; 
     } 
   
      
     int den = floor(pow(10,n)); 
     last = sqr % den; 
   
     if(last == num) 
         printf("Automorphic number \n"); 
     else 
         printf("Not Automorphic \n"); 
   
     getch(); 
 }
 int palindrom(int z)
 { 
   int n, reversed = 0, remainder, original; 
     printf("Enter an integer: "); 
     scanf("%d", &n); 
     original = n; 
  
      
     while (n != 0) { 
         remainder = n % 10; 
         reversed = reversed * 10 + remainder; 
         n /= 10; 
     } 
  
     
     if (original == reversed){ 
         printf("%d is a palindrome.", original); 
        } 
     else{ 
         printf("%d is not a palindrome.", original); 
        } 
     getch(); 
 }
int main()
{
    
    float result;
    int z;    //user choice
     
    
   printf("Choose operation to perform from following\n: ");
      printf("Choose 1 for abundant num \n: ");
      printf("Choose 2 for ambical num\n: ");
      printf("Choose 3 for armstrong num\n: ");
      printf("Choose 4 for automorphic num\n: ");
       printf("Choose 5 for palindrom num\n: ");

    printf("Choosen operation is (1,2,3,4,5): ");
    scanf(" %d",&z);
     
    result=0;
    switch(z)    
    {
        case 1:
             abundantnum(z);
            break;
             
        case 2:
           ambical(z);
            break;
        case 3:
           armstrong(z);
            break;
        case 4:
           automorhic(z);
            break;
        case 5:
           palindrom(z);
            break;      


         

        
        default:
            printf("Invalid operation.\n");
    }
 
   
    return 0;
}