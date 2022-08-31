#include<stdio.h>
int main()
{
	int a[100],i,pos,e,n;
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
	printf("\nEnter element to be inserted : ");
	scanf("%d",&e);
	printf("Enter position where element is to inserted : ");
	scanf("%d",&pos);
	pos--;
	for(i=n-1;i>=pos;i--)
	{
		a[i+1]=a[i];
	}
	a[pos]=e;
	printf("\nArray after insertion : ");
	for(i=0;i<=n;i++)
	{
			printf("%d\t",a[i]);
	}
}