#include<stdio.h>
#include<math.h>
int main()
{ //Calendar for October
int date,num,num2;

home:
printf("\nWelcome to Ocober's Calendar \nEnter the date to get the Day :");
scanf("%d",&date);

if(date>31)
{printf("October has 31 days, press 1 to try again :");
scanf("%d",&num2);
if(num2==1)
{goto home;
}
}

if(date<=31)
switch(date%7)
{case 1:
       printf("\nThursday");
       break;
 case 2:
       printf("\nFriday");
       break;   
 case 3:
       printf("\nSaturday");
       break;	    
 case 4:
       printf("\nSunday");
       break; 
 case 5:
       printf("\nMonday");
       break;	        
 case 6:
       printf("\nTuesday");
       break;  
 case 7:
       printf("\nWednesday");
       break;	       
}

printf("\n\nTo try again, Press 1 :");
scanf("%d",&num);

if(num==1)
{goto home;
}
return 0;
}
