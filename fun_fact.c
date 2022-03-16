#include<stdio.h>
long int fact(int num)
{	int i;
	long int fact=1;
	if(num==1)
	return fact;
	
	for(i=num;i>=1;i--)
	fact=fact*i;
	return fact;
	
}
int main()
{
	int num,a;
	
	
	printf("enter numbeer:num");
	scanf("%d",&num);
	a=fact(num);
	printf("\n factorial of %d is=%d",num,a);
	return 0;
}
