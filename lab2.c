#include<stdio.h>
int main(){
    int height,width,result;
    printf("Enter height and weight of rectangle \n");
    scanf("%d %d",&height,&width);
    result=height*width;
    printf("Area of the rectangle id : %d",result);
    return 0;
}