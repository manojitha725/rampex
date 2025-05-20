#include <stdio.h>
int prime(int n)
{
    if(n<2)
    {
        return 0;
    }
    for(int i=2;i<=n/2;i++)
    {
        if(n%2==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n=2;
    if(prime(n))
    {
        printf("It is a prime number %d \n",n);
    }
    else
    {
        printf("It is not a prime number %d \n",n);
     
    }
}