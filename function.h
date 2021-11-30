#include <stdio.h>

void output()
{
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    if(number%2==1)
        printf("The value of %d is an odd number",number);
        
    else if(number%2==0)
        printf("The value of %d is an even number",number);
}