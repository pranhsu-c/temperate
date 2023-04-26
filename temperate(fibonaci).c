#include<stdio.h>

main()
{
	 int n,fd=0,sd,s;
	 
	 printf("enter number=");
	 scanf("%d",&n);
	 
	 while(n>fd)
	 {
	 	printf("%d ,  ",fd);
	 	s=fd+sd;
	 	fd=sd;
	 	sd=s;
	 }
}
