#include<bits/stdc++.h>
using namespace std;

//structure to store weight and value
struct item
{
	int value,weight;
	
	//constructor to refer to value and weight of same index
	item(int value,int weight): value(value) , weight(weight)
	{
	}
};

//boolean function to compare value/weight ratio
bool cmp(struct item a,struct item b)
{
	double r1 = (double)a.value/a.weight;
	double r2 = (double)b.value/b.weight;
	return r1>r2;
}

//main function to calculate final value in knapsack
double frac_knapsack(int w,struct item arr[],int n)
{
	sort(arr,arr+n,cmp);
	
    int cur_wt = 0;
    double final_val = 0.0;
    
    for(int i=0;i<n;i++)
    {
    	if(cur_wt+arr[i].weight <= w)
    	{
    		cur_wt = cur_wt+arr[i].weight;
    		final_val = final_val+arr[i].value;
		}
		else
		{
			int remain = w-cur_wt;
			final_val = final_val+arr[i].value*((double)remain/arr[i].weight);
			break;
		}
	}
	return final_val;
}

int main()
{
    int W = 50;   //    Weight of knapsack
    item arr[] = {{60, 10}, {100, 20}, {120, 30}};
 
    int n = sizeof(arr) / sizeof(arr[0]);
 
    cout << "Maximum value we can obtain = "
         << frac_knapsack(W, arr, n);
    return 0;
}
