#include<stdio.h>
int fact(int n){
    if(n==0)
    n*fact(n+1);
    return 0;
}
int main(){
    int fact[2];
    printf("%d\n",fact);
    return 0;
}
