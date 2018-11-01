#include<stdio.h>
#include<math.h>
int main()
{ //Multiplication table
int num1,num2,i,ans,num3 ;

home:
printf("\nWelcome to Multiplication Table Builder \n\nEnter the number to get its Table :");
scanf("%d",&num1);
printf("Enter the number till which you want the table :");
scanf("%d",&num2);

for(i=0;i<=num2;i++)
{ans=num1*i;
printf("%d*%d=%d \n",num1,i,ans);
}
printf("To try again, Press 1 :");
scanf("%d",&num3);

if(num3==1)
{goto home;
}

return 0;
}
