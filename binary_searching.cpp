#include<stdio.h>
int binary_searching(int arr[],int n,int key)
{
	int low,high,i,mid;
	low=0;
	high=n-1;
	mid=(low+high)/2;
	while(low<high)
	{
	if(arr[mid]==key)
	return mid;
	else if(arr[mid]>key)
	high=mid-1;
	else
	low=mid+1;}
}
int main()
{
	int n,s,key,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
	}
	scanf("%d",&key);
	s=binary_searching(a,n,key);
	printf("%d",s);
}
