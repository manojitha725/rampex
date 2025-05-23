#include<stdio.h>
int power(int a,int b){
    if(b==0){
        return 1;
    }
    else{
    return a*power(a,b-1);
}
}
int main(){
    printf("%d",power(4,2));
    return 0;
}