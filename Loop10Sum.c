#include<stdio.h>
main()
{
	int a=1,n,sum=0;
	printf("Enter the value of n=");
	scanf("%d",&n);
	while(a<=n)
	{
	    printf("A=%d\n",a);
	    sum=sum+a;
		a++;
	}
	printf("sum=%d",sum);
}
