#include<stdio.h>
#define size 4
int main()
{
	int ar[size];
	int ar2[size]; //counter array all element value is -1
	int i,j,count;
	printf("Input\n");
	for(i=0;i<size;i++)
	{
		printf("index:%d\t:",i);
		scanf("%d%d",&ar[i],&ar2[i]);
		
	}
	for(i=0;i<size;i++)
	{
		count=1; // first set count 1 for a emelent 
		for(j=i+1;j<size;j++)
			{
				if(ar[i]==ar[j]) //if element equal with another element the count incress +1 then duplicate counter array ar2[j] will be 0, 
						 //the 0 valuee element not count again another loop starts
				{
					count++;
					ar2[j]=0; //duplicate element set to be 0 ,this element not count again if loop check with another element. 
				}
			}
		if(ar2[i]!=0) //if a element is not equal to another element then its value still -1, so update count value 1 to non duplicate element   
		{
			ar2[i]=count;
		}
			
	}

	for(i=0;i<size;i++)
	{
		if(ar2[i]!=0)// this condition used to print  duplicate element count value and it does not print 0 value element index 
		{
		printf("Element count:%d\t Element:%d\n",ar2[i],ar[i]);
		}
	}
	return 0;
}
