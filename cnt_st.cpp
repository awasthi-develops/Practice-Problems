#include<stdio.h>
int main()
{
	int i,n,j,k,l;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",a[i]);
    }
    for(i=0;i<n;i++)
    {
		if(a[i]==0)
		j++;
		else if(a[i]==1)
		k++;
		else
		l++;
	}
	for(i=1;i<=j;i++)
	{
		printf("0");
	}
	for(i=1;i<=k;i++)
	{
		printf("1");
	}
	for(i=1;i<=l;i++)
	{
		printf("2");
	}
	return 0;
}
