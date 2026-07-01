#include <stdio.h>

int main() {

 int i, num;
 long long result = 1;
 printf("Enter a number for which you want to find the factorial: ");
 scanf("%d", &num);
 for (i = 1; i <= num; i++) {
     result = result * i;
 }
 printf("Factorial of %d is %lld\n", num, result);

 return 0;
}
