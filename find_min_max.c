#include<stdio.h>
#define size 10
int main()
{
	int ar[size];
	int i,j,max,min;
	printf("************\n");
		printf("Input\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&ar[i]);
	}
	for(i=0;i<size;i++)
	{
		printf("%d\t",ar[i]);
	}
	max=ar[0];
	for(i=0+1;i<size-1;i++)
	{
		if(max<ar[i+1])
		{
		max=ar[i+1];
		}	
	}
	min=ar[0];
	for(j=0+1;j<size-1;j++)
	{
		if(min>ar[j+1])
		{
			min=ar[j+1];
		}
	}
	printf("\n************\n");
	printf("Output\n");
	printf("Max:%d\n",max);
	printf("Min:%d\n",min);
	return 0;
}

