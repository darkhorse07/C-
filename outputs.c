#include<stdio.h>
#include<string.h>
int main()
{
    int a=2,b;
    b=(a++ + ++a) + ++a;
    printf("%d %d",b,a);
}
