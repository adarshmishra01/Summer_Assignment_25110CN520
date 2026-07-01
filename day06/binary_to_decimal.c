//Write a program to Convert binary to decimal. 
#include <stdio.h>

int main() 
{
int bi, deci = 0, r, base = 1;

printf("Enter a binary number: ");
scanf("%d", &bi);

 while (bi > 0) 
 {
    r = bi % 10;     
    deci = deci + (r * base);
    base = base * 2;              
    bi = bi / 10;        
}

printf("Decimal = %d\n", deci);
return 0;
}