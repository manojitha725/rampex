// Online C compiler to run C program online
#include <stdio.h>
void fibbo(int n)
{
    int a=0,b=1,temp;
    for(int i=0;i<n;i++)
    {
        temp=a+b;
        printf("%d\n",temp);
        a=b;
        b=temp;
    }
    printf("\n");
}
int main(){
    fibbo(6);
    return 0;
}
    
