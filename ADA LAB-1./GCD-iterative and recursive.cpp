#include <stdio.h>
#include<stdlib.h>

int itreuclid(int a, int b)
{
int m, n;
while (b > 0)
{
m = a / b;
n = a - m * b;
a = b;
b = n;
}
return a;
}

int receuclid(int a, int b)
{
if (b == 0)
return a;
int q = a / b;
int r = a - q * b;
return receuclid(b, r);
}
int main()
{
	for(;;)
	{
	
int a,b,ch;
printf("\n\nEnter two non-zero numbers\n");
scanf("%d %d",&a,&b);
printf("1.Iterative gcd\n2.Recursive gcd\n");
printf("Enter your choice\n");
scanf("%d",&ch);
switch(ch)
{
    case 1:printf("Gcd of two numbers by iterative function is %d\n",itreuclid(a,b));
            break;
    case 2:printf("Gcd of two numbers by recursive function is %d\n",receuclid(a,b));
            break;
    default:exit(0);
}}
return 0;
}
