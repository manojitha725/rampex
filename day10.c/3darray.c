#include <stdio.h>
void Array(int arr[2][3][4]){
    for(int i=0;i<2;i++){
        printf("%d\n",i);
        for(int j=0;j<3;j++){
            for(int k=0;k<4;k++)
            printf("%d",arr[i][j][k]);
        }
        printf("\n");
    }
    printf("\n");
}
int main()
{
    int array[2][3][4];
     printf("%d\n",array);
    return 0;
}