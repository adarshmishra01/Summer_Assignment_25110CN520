#include<stdio.h>
int main()
{
int i,n,count=0;
printf("Enter the number");
scanf("%d",&n);
for(i=1;i<=n;i++)
    {if (n%i==0)
    { count= count +1; }
    }
if (count==2)
 printf("Prime Number");
else 
printf("Not a prime number");
return 0;
}