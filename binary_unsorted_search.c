#include<stdio.h>
int main()
{
	int a[50],i,n,f,mid,first,last,j,temp;
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
	printf("\nEnter number to be searched : ");
	scanf("%d",&f);
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
		
	first=0;
	last=n-1;
	while(first<=last)
	{
		mid=(first + last)/2;
		if(a[mid]<f)
		{
			first=mid+1;
		}
		else if(a[mid]==f)
		{
			printf("\n%d found at location %d",f,mid+1);
			break;
		}
		else
		{
			last=mid-1;
		}
	}
	if(first > last)
		printf("%d Not found",f);
	return 0;
}