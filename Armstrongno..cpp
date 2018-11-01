#include <stdio.h>
#include<math.h>

int main()
	{                                     //armstrong nnumber
	
	int num,temp,sum=0,digit ;   //declaration
	
		printf("Welcome to Armstrong Number Detector \nEnter the number for the program :");
	    scanf("%d",&num);

	    temp=num;
	
	while(num!=0)   //program logic
		{
			digit=num%10;
			num=num/10;
			sum+=pow(digit,3);
		}
	
	if(sum==temp)
		{
		    printf("\nThe number is Armmstrong");
		}
	
	else
		{
		printf("The number is NOT Armstrong");
		}		
		
	return 0;
	}
