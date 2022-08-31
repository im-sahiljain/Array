#include<stdio.h>
#include<stdlib.h>
char main()
{
	char a[50];
	int i,len,j;
	printf("Enter string:");
	fgets(a,sizeof(a),stdin);
	printf("The entered string is : ");
	puts(a);
	for(i=0;a[i]!='\0';i++);
	printf("String length is %d\n",len=i);
	printf("Reverse of a is ");
	for(j=len-1;j>=0;j--)
	{
		printf("%c",a[j]);
	}
}