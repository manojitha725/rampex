#include <stdio.h>
int lcm(int a,int b){
    if(b==0)return a;
    return lcm(b,a/b);
}
int main() {
    // Write C code here
    printf("%d",lcm(3,6));

    return 0;
}
