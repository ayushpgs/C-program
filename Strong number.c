#include<stdio.h> 
 #include<conio.h> 
 void main(){ 
    int n,i; 
    int fact,rem; 
    int sum=0,temp; 
    temp=0; 
    printf(" 
 Enter a number : "); 
    scanf("%d",&n); 
     
     
    while(n){ 
       i = 1,fact = 1; 
       rem = n % 10; 
       while(i <= rem){ 
          fact = fact * i; 
          i++; 
       } 
       sum = sum + fact; 
       n = n / 10; 
    } 
    if(sum == temp){ 
       printf("%d is a strong number 
 ",temp); 
 } 
    else{ 
       printf("%d is not a strong number 
 ",temp); 
 } 
    getch(); 
 }
