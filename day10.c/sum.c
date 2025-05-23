#include<stdio.h>
int sumofdigits(int num,int sum)
{
    if(num==0)
    {
    return sum;
}
return sumofdigits(num/10,sum+num%10);
}
    int main(){
        int num=12345;
        int result=sumofdigits(num,0);
    printf("The sum of digits is %d\n",result);
    return 0;
}