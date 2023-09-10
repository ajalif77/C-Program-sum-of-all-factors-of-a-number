#include<stdio.h>
int main()
{
int a, sum=0, x;
printf("Enter the required number :");
scanf("%d", &a);
for( x=1; x<=a; x++) {
if(a%x==0) sum=sum+x;
}
printf("\nSum of the factors of %d is: %d", a, sum);
return 0;
}
