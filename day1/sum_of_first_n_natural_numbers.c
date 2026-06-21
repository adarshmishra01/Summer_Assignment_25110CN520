#include<stdio.h>
int main() {
    int n,i,sum;
    printf("\n Enter the value of n-");
    scanf("%d", &n);
    i = 1;
    sum = 0;
    while(i<=n) {
        sum=sum+i;
        i++;
    }   
    printf("\n The sum of first %d natural numbers is %d", n, sum);
    return 0;
}