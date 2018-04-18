#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,k=0,m=0,i,j,pg=0;
	scanf("%d%d%d",&a,&b,&c);

	if(a==b && b==c)
	printf("2");

	if(a<c)
	{
		if(b>=a && b<c)
		{
		for(i=a;i<=c;i++)
		k++;
	    printf("%d",k);
        }
        if(b>=a && b==c)
		{
		for(i=a;i<=c;i++)
		k++;
	    printf("%d",k+1);
        }
        
	    if(b<a && b<c)
	    printf("0");
	    
	}

     else if(a>c)
	{
		 if(b<=a && b<c)
		 {
		for(j=a;j>=b;j--)
		m++;
		printf("%d",m+1);
	     }
	   
	     if(b<a && b>c)
	      {
	      	for(j=a;j>=b;j--)
	      	pg++;
	      	printf("%d",pg+3);
		  }
		  
	     if(b==a && b>c)
	      {
	      	for(j=a;j>=b;j--)
	      	pg++;
	      	printf("%d",pg+4);
		  }
		 
		 
		  if(b<a && b==c)
		  {
		  	for(j=a;j>=b;j--)
	      	pg++;
	      	printf("%d",pg+2);
		  }
    }
   
	return 0;	
}
