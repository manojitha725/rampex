#include <stdio.h>

    int add(int a,int b){
        return a+b;
    }
    int sub(int a,int b){
        return a-b;
    }
    int mul(int a,int b){
        return a*b;
    }
    int divd(int a,int b){
        if(b==0){
            printf("division by zero!\n");
            return 0;
        }
        return(float)a/b;
    }
    int main(){
        int num1,num2,choice;
        printf("Enter first number:");
        scanf("%d",&num1);
        printf("Enter second number:");
        scanf("%d",&num2);
        
        printf("1.add\n");
        printf("2.sub\n");
        printf("3.mul\n");
        printf("4.divd\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
    }
     
    
    