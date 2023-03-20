#include<stdio.h>
main()
{
   int a=1,n;
   printf("Enter the value if n=");
   scanf("%d",&n);
   while (a<=n)
 
    {
      if(n%2==0) 	
	  printf("A=%d\n",n);
	  n--;
    }	
}
