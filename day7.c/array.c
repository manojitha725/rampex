#include <stdio.h>

int main() 
{
    int arr1[3]={2,6,3};
    int arr2[3]={3,5,9};
    int arr3[6];
    int i,j=0;
    for(int i=0;i<3;i++){
        arr3[j++]=arr1[i];
    }
    for(i=0;i<3;i++){
        arr3[j++]=arr2[i];
    }
    for(i=0;i<6;i++){
        printf("%d ",arr3[i]);
    }
    return 0;
}
    