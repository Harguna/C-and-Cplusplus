#include<stdio.h>
#include<math.h>
int main()
{ //Power calculation
int ans=1,i,base,pow,num;

home :
	ans=1;
printf("\nWelcome to Power Calculating program \nEnter the Base :");
scanf("%d",&base);
printf("Enter the Power :");
scanf("%d",&pow);

for(i=1;i<=pow;i++)
{ans=ans*base;
}

printf("The answer is %d \n Press 1 to try again :",ans);
scanf("%d",&num);

if(num==1)
{goto home;
}

}
