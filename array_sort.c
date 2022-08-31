#include<stdio.h>
int main()
{
	int a[10],i,n,j,temp;
	printf("Enter how many elements : ");
	scanf("%d",&n);
	printf("Enter %d elements : ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Entered array is : \n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
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
	printf("\nSorted array is : ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}