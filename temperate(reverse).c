#include <stdio.h>
 
 main()
{
    int n,t,remainder,reverse=0;
 
    printf("Enter an integer=");
    scanf("%d", &n);
    
    t=n;
    while (n>0)
    {
        remainder=num%10;
        reverse=reverse*10 + remainder;
        num /= 10;
    }
    printf("Given number is = %d\n", t);
    printf("Its reverse is  = %d\n", reverse);
    if (t==reverse)
        printf("Number is a palindrome \n");
    else
        printf("Number is not a palindrome \n");
}
