#include<stdio.h>
#include<math.h>
int main()
{ //Reverse a number
home:
int temp2,temp,num2,num,rev=0,rem;   //declaration

printf("Welcome to this Reversing Number program");
printf("\nEnter a numer to be REVERSED :");    //getting the number
scanf("%d",&num);
temp=num;

while(temp!=0)    //reversing begins
{ rem=temp%10;
temp/=10;
rev=rev*10+rem;
}

printf("\nReverse of the entered number is %d \n To try again press 1\n",rev);  //printing the result
scanf("%d",&num2);
temp2=num2;
if(temp2==1)
{goto home;
}

return 0;  //returning the value
}
