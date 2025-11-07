#include <stdio.h>
int main() {
    printf("enter a number  : -" );
    scanf("%d",&n);

    int a=-1,b=1,c;
    for (int i=1;i<=n;++)
    {
        c=a+b;
        a=b;
        b=c ;
        printf("%d",c);
    }
    printf("\n");
    return 0;
}