#include<stdio.h>

main()
{
	int a=1,n,factorial=1;
	
	printf("enter value=");
	scanf("%d",&n);
	
	while(a<=n)
	{
		fact=fact*a;
		a++;
	}
	printf("factorial of %d=%d",n,fact);
}
