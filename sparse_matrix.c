#include<stdio.h>
int main()
{
	int i,j,n,m,c=0;
	printf("enter rows and columns:");
	scanf("%d %d",&n,&m);
	int arr[n][m];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&arr[i][j]);
		}
		
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(arr[i][j]!=0)
			c++;
		}
	}
	if (c<=n*m-c)
	{
	printf("sparse\n");
	int arr2[c][3];
	int k=0;
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(arr[i][j]!=0)
			{
			arr2[k][0]=i;
			arr2[k][1]=j;
			arr2[k][2]=arr[i][j];
			k++;
		}
		}
	}
	for(i=0;i<c;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",arr2[i][j]);
		}
		printf("\n");
	}
}
else
printf("not sparse");
}
	
	
	
