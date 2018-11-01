#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int n;
    cin >> n;
    int arr[n][n];
    for(int i=0;i<n;i++)
        {for(int j=0;j<n;j++)
            {cin>>arr[i][j];}}
    int sum1=0,sum2=0,sum3=0;
    for(int i=0;i<n;i++)
        {
         for(int j=0;j<n;j++)
            {
             if(n/2==0)
                {
                 if(i==j)
                  {sum1=sum1+arr[i][j];}
                 if(i+j==n+1)
                  {sum2=sum2+arr[i][j];}
                }
             else
                 {if(i==n/2+1&&j==n/2+1)
                     {sum3=sum3+arr[i][j];}
                  else
                      if(i==j)
                  {sum1=sum1+arr[i][j];}
                 if(i+j==n+1)
                     {sum2=sum2+arr[i][j];}
                 }
            }
        
        }
    int diff;
    diff=sum1-sum2;
    if(diff<0)
        {cout<<(-diff);}
    else{cout<<diff;}
    
    return 0;
}

