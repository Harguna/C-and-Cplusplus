#include<stdio.h>
#include<math.h>
int main ()
	{//prime number detector
	
	 int num,count=0,i;                                   //declaration
		 printf("Enter a number for the program :");
		 scanf("%d",&num);
	 
	 if(num==0||num<0)
		 {
		 	printf("Entered number is neither Comosite nor Prime");
		 }
	 
	 else
		{
		  for(i=1;i<num;i++)                                   //programn logic begins here
			 {
			    if(num%i==0)
				    {
				    	count++;
					}
			 }
		 
		 if(count>1)
			 {
			 printf("Entered number is Composite");
			 }
			 
		 else
			 {
			 printf("Entered number is Prime");
			 }
	    }
	 return 0;
	}
