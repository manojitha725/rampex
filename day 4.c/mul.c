#include <stdio.h>
int main()
{
    int num,i;
    printf("enter an integer:");
    scanf("%d",&num);
    printf("mutiplication table of %d:\n",num);
    for(int i=2;i<=10;i++){
        printf("%d*%d=%d\n",num,i,num*i);
    }
    return 0;
}
    
    