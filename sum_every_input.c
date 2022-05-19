#include<stdio.h>
int main()
{
	int sum=0,x;
	do
	{
	printf("enter the number for addition  \n  ");
	printf("otherwise enter 0 for exit  ");
	scanf("%d",&x);
	sum=sum+x;
	printf("The addition is = %d",sum);
    }  
	while(x>0);
	return 0;
}
