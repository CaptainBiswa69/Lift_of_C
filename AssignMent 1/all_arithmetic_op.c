#include<stdio.h>
void main(){
    int a,b ;
    printf("Enter Two Numbers separated by spaces : ");
    scanf("%d %d", &a, &b);
    printf("\nThe sum of two given numbers is:%d ",a+b);
    printf("\nThe substraction of two given numbers is:%d ",a-b);
    printf("\nThe multiplication of two given numbers is:%d ",a*b);
    printf("\nThe division of two given numbers is:%d ",a/b);
    printf("\nThe modulo of two given numbers is:%d ",a%b);
}