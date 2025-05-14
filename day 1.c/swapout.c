#include <stdio.h>

int main(){
    int x,y;
    printf("input value for x&y:\n");
    scanf("%d%d",&x,&y);
    printf("Before swapping the value of x&y:%d %d",x,y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("after swapping the value of x&y:%d %d",x,y);
    return 0;
    
} 