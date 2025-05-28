#include <stdio.h>

int main() {

    int arr[]={30,40,22,37,35};
    int*start=arr;
    int*end=arr+4;
    int temp;
    while(start<end){
        temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
    for(int i=0;i<5;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}
