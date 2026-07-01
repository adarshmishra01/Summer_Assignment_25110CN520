#include<stdio.h>
int main() 
{
    int n,i= 1;

    printf("\nEnter the number for which you want the table: ");
    scanf("%d", &n);
   while(i<=10) 
 {
   
 printf("\n%d",n*i);
 i=i+1;
}
return 0;
}
   
   