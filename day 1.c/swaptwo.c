#include <stdio.h>

int main() {
    int a,b,temp;
    printf("Please enter the value of a and b\n");
    scanf("%d %d",&a,&b);
    printf("\n before a=%d and b=%d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("after:a=%d and b=%d\n",a,b);
    return 0;
}