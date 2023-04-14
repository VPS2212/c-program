#include<stdio.h>
#define size 10
int main()
{
        int ar[size];
        int i,j,k,l;
	printf("Enter The Elements (Limit 0 to 9)\n"); 
	for(l=0;l<size;l++)
	{
		scanf("%d",&ar[l]);
	}
	printf("Input elements are:\t");
	for(l=0;l<size;l++)
	{
		printf(" %d\t",ar[l]);
	}
        for(i=0;i<size-1;i++)
        { 
		//printf("loop i index=%d element=%d\n",i,ar[i]);
		for(j=i+1;j<size-1;j++)
                {
			if(ar[j]==-1)
			{
				break;
			}
		//	printf("Loop j index=%d:element=%d\n",j,ar[j]);
			if(ar[i]==ar[j])
			{
				for(k=j;k<size-1;k++)
				{
		//		printf("Loop K index=%d:Element=%d\n",k,ar[k]);
				ar[k]=ar[k+1];
				if(ar[k]==-1)
				{
					break;
				}
				}
			}
		}
		if(ar[i]==-1)
		{
			break;
		}
		ar[k]=-1;
	}
	printf("\n");
	printf("Output:");
		for(i=0;i<size-1;i++)
		{	
		if(ar[i]>-1)
		{		
		printf(" %d\t ",ar[i]);
		}
		}
	printf("\n");
        return 0;
}

