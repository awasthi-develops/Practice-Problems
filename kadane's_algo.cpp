#include<stdio.h>
int max_sum(int arr[],int n)
{
	int i;
	int max_ending_here=0;
	int max_so_far=0;
	for(i=0;i<n;i++)
	{
	 max_ending_here=max_ending_here+arr[i];
	 if(max_so_far<max_ending_here)
	 max_so_far=max_ending_here;
	 if(max_ending_here<0)
	 max_ending_here=0;
    }
    return max_so_far;
}

int main()
{
	int i,n;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    
    printf("%d",max_sum(arr,n));
}
