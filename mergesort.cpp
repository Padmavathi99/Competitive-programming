#include<bits/stdc++.h>
using namespace std;
int a[]={1,7,8,2,3};
int low=0,high=4;
int temp[6];
void merge(int a[],int low, int mid, int high)
{
	int i=low;
	int j=mid+1;
	int k=low;
	while(i<=mid && j<=high)
	{
		if(a[i]<a[j])
		{
			temp[k]=a[i];
			i++;
			k++;
		}
		else
		{
			temp[k]=a[j];
			j++;
			k++;

		}
	}
	while(i<=mid)
	{
		temp[k]=a[i];
			i++;
			k++;
	}
	while(j<=high)
	{
		temp[k]=a[j];
			j++;
			k++;
	}

}
void mergesort(int a[],int low,int high)
{
	if(low<high)
	{
		int mid=(low+high)/2;
		mergesort(a,low,mid);
		mergesort(a,mid+1,high);
		merge(a,low,mid,high);

	}

}
int main()
{
	
	mergesort(a,0,4);
	for(int i=0;i<5;i++)
	{
		cout<<temp[i]<<" ";
	}
	return 0;
}