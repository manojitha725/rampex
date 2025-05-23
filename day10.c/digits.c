#include<stdio.h>
int digits(int n){
    int a=1;
    if(n==0)
    {
    return 0;
    }
    else{
    return a+digits(n/10);
}
}
int main(){
    printf("%d",digits(4524897));
}