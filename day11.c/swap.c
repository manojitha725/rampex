#include<stdio.h>
void swap(int*x,int*y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
int main(){
    int a,b;
    printf("Enter two integers:");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("After swapping:a=%d,b=%d\n",a,b);
    return 0;

}