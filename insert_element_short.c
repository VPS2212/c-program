#include<stdio.h>  
int main()
{
    int ar[50];
    int i,n,a,l;
    printf("Input the size of array\n");
    scanf("%d",&n);
    printf("Input %d Element in ascending order\n",n);
    for(i=0;i<n;i++)
    {
    printf("index%d:\t",i);
    scanf("%d",&ar[i]);
    }
    printf("Enter a element to insert\n");
    scanf("%d",&a);
    for(i=0;i<n;i++)
    {
	    if(ar[i]<a)
	    {
		    l=i+1;
		    printf("L:%d\t",l);
	    }
	    else
	    {
		    l=i;
		    break;
	    }
    }
    printf("***L=%d\n",l);
    for(i=n+1;i>l;i--)
    {
	    //printf("i=%d\n",i);
	    //printf("ar[i]:%d\t ar[i-1]:%d\n",ar[i],ar[i-1]);
	    ar[i]=ar[i-1];
    }

    printf("shorted element are\n");
    for(i=0;i<n+1;i++)
    {
	    ar[l]=a;
	    printf("%d\t",ar[i]);
    }
  return 0;
   }
