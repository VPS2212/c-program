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
		scanf("%d",&ar[i]); //get input form user
	}
	for(i=0;i<size;i++)
	{
		printf("%d\t",ar[i]); //print input elements
	}
	max=ar[0]; // initialy set maxmimum value ar[0] , ex-ar[0]=10, max=10.
	for(i=0+1;i<size-1;i++)  //loop start with ar[i+1], becuase we set ar[0] is max. 
	{
		if(max<ar[i+1]) //check maximum value to other element in array,check  other elements  whether big or not, if big update max =ar[i+1]
		{
		max=ar[i+1];//update max as ar[i+1], else the max value to be ar[0]. 
		}	
	} 
	min=ar[0]; // initially set minimum value ar[0], 
	for(j=0+1;j<size-1;j++)
	{
		if(min>ar[j+1]) //find minimum value 
		{
			min=ar[j+1]; //update minimum value if ar[0]>ar[i+1]
		}
	}
	printf("\n************\n");
	printf("Output\n");
	printf("Max:%d\n",max); 
	printf("Min:%d\n",min);
	return 0;
}

