#include <stdio.h>/*program calculator*/
 
int main()
{
    int x,y;
    float result;
    char ch;    //user choice
     
    printf("Enter first number: ");
    scanf("%d",&x);
    printf("Enter second number: ");
    scanf("%d",&y);
     
    printf("Choose operation to perform (+,-,*,/,%): ");
    scanf(" %c",&ch);
     
    result=0;
    switch(ch)    
    {
        case '+':
            result=x+y;
            break;
             
        case '-':
            result=x-y;
            break;
         
        case '*':
            result=x*y;
            break;
             
        case '/':
            result=(float)x/(float)y;
            break;
             
        case '%':
            result=x%y;
            break;
        default:
            printf("Invalid operation.\n");
    }
 
    printf("Result: %d %c %d = %f\n",x,ch,y,result);
    return 0;
}