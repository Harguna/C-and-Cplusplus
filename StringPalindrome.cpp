#include<stdio.h>
#include<math.h>
int main()
{ //String Palindrome
int num,i,k,count=0; char ch[50],rev[50] ;
printf("Welcome to String Palindrome Program \nEnter the number of alphabets :");
scanf("%d",&num);
printf("Enter string of %d alphabets one by one : \n",num);

for(i=0;i<num+1;i++)
{
   scanf("%c",&ch[i]);
   fflush(stdin);
}

for(i=num-1,k=0;i>=0;i--,k++)
{ 
   rev[k]=ch[i]; 
}

for(i=0;i<num;i++)
	    {
		if(rev[i]==ch[i])
	     { count++;
	      }
	    }
    
if (count==num)
  {printf("Entered String is a Palindrome");
	}  
	
else
       {printf("Entered string is NOT a Palindrome");
       }	
	
return 0;
}

