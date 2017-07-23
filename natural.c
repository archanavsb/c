#include<stdio.h>
int main()
{
int i,num,sum;
printf("enter the interger number\n");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
sum=sum+1;
}
printf("sum of first %d natural numbers=%d\n",num,sum);
return 0;
}
