#include<stdio.h>
const int m=3;
const int n=4;
int arr_find_row(int arr[m][n],int k)
{
	int i,j;
	for(i=0;i<m;i++)
	{
		if(arr[i][n]>=k)
		{
		return i;
		break;
	    }
	}
}
int arr_find(int arr[m][n],int k)
{
	int row,j;
	row=arr_find_row(arr,k);
	printf("%d",row);
	for(j=0;j<n;j++)
	{
	if(arr[row][j]==k)
	return 1;
	else
	return 0;
    }
	
}

int main()
{
	int arr[m][n]={{5,8,11,14},{17,18,20,22},{24,28,29,32}};
	int k=28;
	printf("%d",arr_find(arr,k));
}
