#include<stdio.h>
main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a==c)
	{
		if(a==b)
		 printf("2");
		else if(a>b)
		 printf("%d",(a-b)*2+1);	
		else
		 printf("%d",(b-a)*2+1);
		  
	}
	else if(a>c)
	{
		if(a==b)
		printf("%d",(b-c)+2);
		else if(a>b)
		  {
			if(b>c)
			printf("%d",(a-b)+1);
			else if(b<c)
			printf("%d",(a-b)+(c-b)+1);
			else
			printf("%d",(a-b)+2);
		  }  
		else
		printf("%d",(b-a)+(b-c)+1);
	}
	else
	{
	     if(a==b)
	     printf("%d",(c-a)+2);
	     else if(a>b)
	     printf("%d",(a-b)+(c-b)+1);
	     else
	     {
	     	if(b==c)
	     	printf("%d",(b-a)+2);
	     	else if(b>c)
	     	printf("%d",(b-a)+(b-c)+1);
	     	else
	     	printf("%d",(c-a)+1);
		 }
	}
}
