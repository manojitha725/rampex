#include <stdio.h>

int main() 
{
    int n,i;
    printf("Enter the number of  elements in athe array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++)
    {
        printf("elements %d:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("The elements in the array are:\n");
    
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
    return 0;
}