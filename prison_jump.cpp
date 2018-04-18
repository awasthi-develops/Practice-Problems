#include<stdio.h>
int main()
{
	int i,j,n,x,y,jump=0;
	//no. of walls
	scanf("%d",&n);
	//height of each wall
	int height[n];
	for(i=0;i<n;i++)
	scanf("%d",&height[i]);
	//value of x and y
	scanf("%d",&x);
	scanf("%d",&y);
	
	//algo
	i=0;
	while(i<n)
	{
		if(height[i]<=x)
		jump++;
		else
		{
		for(j=height[i];j>x;j=j-(x-y))
		{
			jump++;
		}
	    }
	    jump++;
	i++;
	}
	printf("%d",jump);
	return 0;
}
