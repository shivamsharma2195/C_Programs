#include<stdio.h>
int rec_fun(num)
{
	if(num==1)
	return 1;
	
	return num*rec_fun(num-1);

}
int main()
{
	int num,a;
	printf("enter number:num");
	scanf("%d",&num);
	
	a=rec_fun(num);
	printf("\n%dfactroial of a number is=%d",num,a);
	return 0;
}
