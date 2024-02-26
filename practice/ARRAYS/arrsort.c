
#include <stdio.h>

    int main()
{
    int i,arr[50],c,j;
    
    for(i=0;i<=5;i++)
    {
        printf("enetr %d :",i);
        scanf("%d",&arr[i]);
    }
    
       for(i=0;i<=5;i++)
    {
        for(j=i+1;j<=5;j++)
	{
            if(i!=j)
            {
                if(arr[i]>arr[j])
                {
                    c=arr[j];
                    arr[j]=arr[i];
                    arr[i]=c;
                }
            }
        }
       		 printf(" %d",arr[i]);
    }
}
