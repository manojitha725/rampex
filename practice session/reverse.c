// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int arr[]={20,30,40,50,60};
    int *ptr=arr;
    for(int i=4;i>=0;i--)
    {
     printf("%d",*(ptr+i));
     printf("\n");
    }
    return 0;
}
