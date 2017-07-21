#include<stdio.h>
int main()
{
int number;
printf("enter an integer");
scanf("%d",&number);
if(number % 2)
printf("%d is even", number);
else 
printf("%d is odd",number);
return 0;
}
