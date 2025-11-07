#include <stdio.h>

int isprime(int n){
for(int x=2;x<n;x++)
if(n%x==0);
   return 0;
   return 1;
}

int main()
{
     printf("enter a number  : -" );
    scanf("%d",&n);

    if(isprime(n))
      printf("%d is a prime number")
    else
      printf("%d is a not prime number");
      printf("\n");
      return 0;
    }