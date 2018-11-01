#include<stdio.h>
#include<math.h>

int swap(int *a,int *b)
{
int temp=*a;
*a=*b;
*b=temp;
return 0;
}


int main()
{ //Bubble Sort
int num,i,j,arr[50],n,temp;
printf("Welcome to Bubble Sort program \nEnter the number of Entries :");
scanf("%d",&num);

printf("\nEnter the number one by one :\n");

for(i=0;i<num;i++)
{
scanf("%d,",&arr[i]);
}

printf("\nEntered numbers are :\n ");
for(i=0;i<num;i++)
{
printf("%d,",arr[i]);
}

printf("\n\nSelect the arrangement order:\n1)Ascending Order \n2)Descending Order : ");
scanf("%d",&n);

if(n==1)
	{
	    for(i=0;i<num-1;i++)
	    {for(j=0;j<num-i-1;j++)
	        {
	        	if(arr[j]>arr[j+1])
	        	{
	        	swap(&arr[j],&arr[j+1]);
				}
			}
		}
		
    }
		
 if(n==2)
    { for(i=0;i<num-1;i++)
	    {for(j=0;j<num-i-1;j++)
	        {
	        	if(arr[j]<arr[j+1])
	        	{swap(&arr[j],&arr[j+1]);
				}
			}
		}
		 		
    }

for(i=0;i<num;i++)
{
printf("%d,",arr[i]);
}

return 0;

}
