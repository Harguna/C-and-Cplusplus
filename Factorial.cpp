#include<stdio.h>
#include<math.h>
int main()
{ //Factorial
int num1,i,fact,num2,temp;   //declaration

home:
	
printf("\nWelcome to this FACTORIAL program \nEnter the number to get its factorial :");  
scanf("%d",&num1);    //entering the number
temp=num1;

for(i=0;i<temp;i++)  //calculating factorial
{fact*=(temp-i);
}

printf("%d \nPress 1 to try again: ",fact);  //printing answer
scanf("%d",&num2);

if(num2==1)
{goto home ;     //goto statement
}

return 0;
}
