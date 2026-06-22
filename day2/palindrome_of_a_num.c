#include<stdio.h>
int main()
{
    int r,n,c,sum=0;
    printf("Enter the number");
    scanf("%d",&n);
     c=n;
    while (n>0)
    {
        r=n%10;
        sum=r+(sum*10);
        n/=10;
    }
      if (c==sum)
      printf("the number is palindrome");
      else
      printf("the number not plaindrome");
    
    return 0;

}