#include<stdio.h>

main()
{
	int fd,n,ld,sum;
	printf("enter value=");
	scanf("%d",&n);
	
	ld=n%10;
	
	while(n>=10)
	{
		n=n/10;
		
	}
	fd=n;
	
	sum=fd+ld;
	
	printf("sum=%d",sum);
	
}
