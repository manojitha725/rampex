#include<stdio.h>
int main(){
    int arr[]={30,25,45,56};
    int *ptr=arr;
    for(int i=0;i<4;i++){
        printf("%d\n",*(ptr+i));
    }
}