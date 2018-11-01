#include<stdio.h>
#include<math.h>
void main()
{ /*Sum of digits at even and odd places*/
 int i,count=0,y,sumeven=0,sumodd=0 ;
 long long int z,temp,n; 

 printf("Welcome to this Sum Of Digits program");	
 printf("\nEnter a number : ");
 scanf("%d",&n);
 
 temp=n;
 
 while(n!=0)
 {n=n/10;
 count++;
 }
 
for (i=1;i<=count;i++)
 {z=(pow(10,(count-i)));
 y=temp/z;
 temp%=z;
 
 if(i%2==0)
 { sumeven+=y;
 }
 
 if((i%2)!=0)
 { sumodd+=y;
 }
}
 printf("sumeven is %d and sumodd is %d",sumeven,sumodd);
 
}
