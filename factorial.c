#include<stdio.h>
int main()
{
	int num,i;
	long int fact;
	printf("enter number:num");
	scanf("%d",&num);

	fact=1;
	for(i=num;i>=1;i--)
	fact=fact*i;

	printf("\n factorial of %d is=%ld",num,fact);
	return 0;
	
}
