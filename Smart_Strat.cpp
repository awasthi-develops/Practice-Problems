#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int i,n,q;
		long long int div=1;
		scanf("%d %d",&n,&q);
		int a[n],x[q];
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		for(i=0;i<q;i++)
		scanf("%d",&x[i]);
		
		for(i=0;i<n;i++)
		div=div*a[i];
		
		for(i=0;i<q;i++)
		printf("%d ",x[i]/div);
	}
	return 0;
}
