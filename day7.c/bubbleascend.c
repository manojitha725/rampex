#include <stdio.h>

int main() 
{
    int arr[]={34,65,21,65};
    int temp;
    for(int i=0;i<4;i++){
    for(int j=i+1;j<4;j++)
    {
        if(arr[i]>arr[j]){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}
    for(int i=0;i<4;i++)
    {
    printf("%d\t",arr[i]);
    }

    return 0;
}