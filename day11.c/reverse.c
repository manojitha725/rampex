#include <stdio.h>
int reverse(int n){
    if(n==0)
    return 0;
    printf("%d\n",n);
    reverse(n-1);
}
int main()
{
    int num=9;
    printf("%d\n",reverse(num));
}

