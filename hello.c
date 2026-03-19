#include <stdio.h>

int factorial(int n){
 if (n==1) return 1;

 return n*factorial(n-1);
}

void main()
{
 printf("Hi\n\n");
 printf("Let me change something 2...\n\n");
 printf("I calculated fac(4) = %d\n",factorial(4));
}

