//Find kth smallest element in array. Ex: a=[1,5,2 7,3] k=4 ans= 5

#include<stdio.h>
int main()
{
	int a[100],i,n,temp,j,k,distinct=0;
	printf("Enter how many elements upto 100 : ");
	scanf("%d",&n);
	printf("Enter elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Entered elements are : ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;		
			}
		}
	}
		for(i=0;i<n;i++)
		{
			if(i!=0 && a[i]!=a[i-1])
				distinct++;
		}
	printf("Sorted elements are : ");
	for(i=0;i<n;i++)
	{
		printf("\t%d",a[i]);
	}
	printf("\nEnter kth smallest element you want to find : ");
	scanf("%d",&k);
	if(k>distinct)
		{
			printf("not possible");
			exit(0);
		}
		int x=k;
	for(i=0;i<n;i++)
	{
		if(i!=0 && a[i]==a[i-1])
		++k;
		if(i==k)
		break;
	}
	printf("\nSmallest %d element is %d",x,a[k-1]);

	
	
	
	
	
	
}