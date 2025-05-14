#include <stdio.h>

int main() {
    // Write C code here
    int num1,num2,sub;
    printf("Enter the first number:");
    scanf("%d",&num1);
    printf("enter the second number:");
    scanf("%d",&num2);
    sub=num1-num2;
    printf("THE sub of %d and %d is%d\n",num1,num2,sub);
    return 0;
}