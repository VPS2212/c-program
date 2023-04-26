#include<stdio.h>
#define size 5
int main()
{
    int ar[size],temp;
    int even[size],odd[size];
    int i;
    printf("\n************\n");
    for(i=0;i<size;i++)
    {
        printf("input %d\t:",i);
        scanf("%d",&ar[i]);
    }
     for(i=0;i<size;i++)
     {
    even[i]=0;
    odd[i]=0;
    temp=ar[i]%2;
    if(temp==0)
     {
        even[i]=ar[i];
     }
     if(temp==1)
     {
         odd[i]=ar[i];
     }
     if(temp==-1)
     {
         odd[i]=ar[i];
     }
     }
     printf("\n************\n");
     printf("The Even Elements:\n");
     for(i=0;i<size;i++)
     {
         if(even[i]!=0)
         {
        printf("%d\t",even[i]);
         }
     }
     printf("\n************\n");
     printf("\n The Odd Elements:\n");
     for(i=0;i<size;i++)
     {
         if(odd[i]!=0)
         {
         printf("%d\t",odd[i]);
         }
    }
    printf("\n************\n");
     return 0;
}
