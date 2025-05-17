#include<stdio.h>
int main()
{
    int num=123,rev=0,original;
    original=num;
    while(num!=0)
    {
        rev=rev*10+num%10;
        num/=10;
    }
    if(original==rev){
        printf("it is a palindrome:%d\n",original);
    }
    else{
        printf("it is not a palindrome:%d\n",original);
    }
    return 0;
}