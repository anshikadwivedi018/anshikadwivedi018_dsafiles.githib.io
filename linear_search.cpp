#include<stdio.h>
int main()
{
	int n,i,key,flag=0,c;
	printf("Enter no.of elements:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter %d elements:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the key to be searched:");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
		flag=1;
		c=i;}
	}
	if(flag==0)
	printf("element not found");
	else
	printf("element found at %d index",c);
}
