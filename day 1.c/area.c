#include <stdio.h>

int main(){
    int width;
    int height;
    int area;
    int perimeter;
    height=7;
    width=5;
    perimeter=2*(height+width);
    printf("perimeter of the rectangle=%d inches\n",perimeter);
    area=height*width;
    printf("area of the rectangle=%d square inches\n",area);
    return 0;
    
} 