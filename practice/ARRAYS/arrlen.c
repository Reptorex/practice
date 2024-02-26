int main() 
{
    int arr1[]={1,4,3,8,6,0};
    
    int arr[30],i;
    
    for(i=1;i<=5;i++)
    {
        printf("FOR RUN-TIME enetr elements no %d : ",i);
        scanf("%d",&arr[i]);
    }
    
     
    for(i=1;i<=5;i++)
    {
        printf("\n%d",arr[i]);
       
    }
    printf("\nFOR PRINTING ALREADY DEFINED ARRAY");

    i=0;
    while(arr1[i] != 0)
    {
        printf("\n%d",arr1[i]);
        i++;
    }
     
     printf("\n\nsize of array is %d",sizeof(arr1));
    
}
