#include<stdio.h>  
 #include<conio.h>  
 Void main(){     
 int n,i,m=0,a=0;     
 printf("Enter the number to check prime:");     
 scanf("%d",&n);     
 m=n/2;     
 for(i=2;i<=m;i++)     
 {     
 if(n%i==0){ 
    a++; 
 }  
 }    
 if(a==0){ 
   printf("number is prime"); 
  } 
 else{ 
  printf("number is not prime"); 
 } 
 getch(); 
 }
