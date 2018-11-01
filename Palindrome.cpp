#include<stdio.h>
#include<math.h>
int main()
{ //Palindrome
home:
int num,n,rev=0,rem,temp; 

printf("\nWelcome to this Palindrome program");
printf("\nEnter a number :");    //getting the number
scanf("%d",&num);

temp=num;  //storing number

while(num!=0)    //reversing begins
{ rem=num%10;
num/=10;
rev=rev*10+rem;
}

if(rev==temp)
{printf("The entered number is a Palindrome \n");
}
									
else
printf("The entered number is NOT a Palindrome \n");

printf("To try again, press 1: ");
scanf("%d",&n);

if(n==1)
{goto home;
}
return 0;
}

