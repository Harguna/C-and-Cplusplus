#include<stdio.h>
#include<math.h>
int main()
{ //Fibonacci Series
int num1,num2,i,next,first=0,second=1;

home:
printf("\nWelcome to Fibonacci Series Generator \nEnter the number of terms of the series :");
scanf("%d",&num1);

for(i=0;i<num1;i++)
{
if(i<=1)
    {printf("%d \n",i);}
    

else
    {	next=first+second;
        first=second;
        second=next;
	printf("%d \n",next);

    }
}
printf("To try again, Press 1 :");
scanf("%d",&num2);

if(num2==1)
{goto home;
}
return 0;

}
