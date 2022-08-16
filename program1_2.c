#include<stdio.h>
int main() {
    int x[2];
    printf("enter your number:");
    scanf("%d %d",&x[0],&x[1]);
    printf("%d + %d = %d\n",x[0],x[1],x[0]+x[1]);
    printf("%d - %d = %d\n",x[0],x[1],x[0]-x[1]);
    printf("%d x %d = %d\n",x[0],x[1],x[0]*x[1]);
    printf("%d / %d = %.2f\n",x[0],x[1],(float)x[0]/x[1]);
}