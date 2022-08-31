#include<stdio.h>
int main()
{
	int a[100],i,pos=0,e,n,j,temp;
	printf("Enter number of elements : ");
	scanf("%d",&n);
	printf("Enter elements of array : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Entered elements of array are : ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>a[i+1])
		{
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
		}
	}
	printf("\nSorted array is : ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\nEnter element to be inserted : ");
	scanf("%d",&e);
	for(i=0;i<n;i++)
	{
		if(a[i]<e)
		{
			pos++;
		}
		else
		{
			break;
		}
	}
	for(i=n-1;i>=pos;i--) 
	{
        a[i+1] = a[i];
    }
    a[pos]=e;
	printf("Array after insertion : ");
	for(i=0;i<=n;i++)
	{
			printf("%d\t",a[i]);
	}
}