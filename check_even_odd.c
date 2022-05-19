#include<stdio.h>
int main()
{
	int x;
	
	printf("    \nenter the number for checking even  \n  ");
	
	scanf("%d",&x);
	if(x%2==0)
	printf("The number  %d is Even  ",x);
	else
	printf("The number %d is odd",x);
    
	return 0;
}
