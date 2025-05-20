#include<stdio.h>
void great(const char name[],const char role[])
{
    printf("welcome %s as a %s \n",name,role);
}
int main()
{
    great("Manojitha","govt officer");
    return 0;
}