#include <stdio.h>
int main() {
    int num, count;
    count = 0;
    printf("enter the number for which you want to know the digits-");
    scanf("%d",&num);

    for (num == 0); {
        count = 1;
    }
    while(num !=0 )
    {
    num=num/10
    count = count+1;
    }
printf("the number of digit %d", count);
return 0;
}