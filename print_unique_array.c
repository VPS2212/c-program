#include<stdio.h>
#define size 8
int main()
{
	int ar[size];
	int ar2[size];
        int i,j,k;
	printf("Enter the Input Element:\n");
	for(i=0;i<size;i++)
	{
		printf("Index %d\t:",i);
		scanf("%d",&ar[i]);
	}
        for(i=0;i<size;i++)
	{
		//printf("ar[i]=%d\t",ar[i]);
	for(j=i+1;j<size;j++)
	{		
		//printf("ar[J]=%d\t",ar[j]);
		if(ar[i]==ar[j])
		{
			for(k=j+1;k<size;k++)
			{
				if(ar[j]==ar[k])
				{
					ar2[k]=ar[k];
				}
			}
			ar2[j]=ar[j];
			ar2[i]=ar[i];
	//	printf("%d\t %d\t",ar[i],ar[j]);
		}
       	}
	}
	printf("Unique Number:\n ************** \n");
	for(i=0;i<size;i++)
	{
	if(ar2[i]==0)
	{
		printf("%d\t",ar[i]);
	}
	}
	printf("\n");
        return 0;
}

