#include<stdio.h>
int main()
{
	int a[10],i,n,f,found = 0;
	printf("Enter how many elements : ");
	scanf("%d",&n);
	printf("Enter %d elements : ",n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Entered array is : \n");
	for(i=1;i<=n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\nEnter number to be searched : ");
	scanf("%d",&f);
	for(i=1;i<=n;i++)
		if(a[i] == f)
		 {
		 	found = 1;
		 	break;
		 }
	if(found == 1)
	{
		printf("%d is present at %d location",f,i);
	}
	else
	{
		printf("%d is not present.",f);
	}
}