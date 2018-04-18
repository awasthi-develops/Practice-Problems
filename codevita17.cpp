#include<stdio.h>
int arr[19*19];
int main()
{
	int i,j,n,k=0,m;
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
     for(j=2;j<i;j++)
	 {
		 if(i%j == 0)
			 k=1; 
	 }
	 if(k == 0)
		 arr[i-2]=i;
	}
	for(i=0;i<n*n;i++)
	{ 
         k=0;
		for(i=2;i<=n;i++)
		{
			for(j=2;j<i;j++)
			{
				if(i%j == 0)
					k=1;
			}
         if(k==0)
            m++;			 
	    }
	}
	printf("%d",m);
	return 0;
	
}
