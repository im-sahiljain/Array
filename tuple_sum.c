/*Given an array of integers, find all possible pair of tuples with sum within a given range.
Example [1,2,3,4,5,6,7,8,9,10]
Range 4 to 9
Output- 
1,4
2,3
1,5
2,4
1,6
2,5
3,4
1,7
2,6
3,5
*/
#include<stdio.h>
int main()
{
	int a[100],i,n,j;
	printf("Enter how many numbers in array upto 100 : ");
	scanf("%d",&n);
	printf("Enter %d elements of array : ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Entered array is : ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
	printf("Tuples whose sum is between 4 and 9 are \n");
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(a[i]+a[j]>4 && a[i]+a[j]<9 && i!=j)
			{
				printf("(%d,%d)\n",a[i],a[j]);
			}
		}
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}