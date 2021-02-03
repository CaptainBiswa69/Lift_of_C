#include<stdio.h>
void main(){
    float r,a,c,d;
    printf("Enter the radius of a circle:");
    scanf("%f",&r);
    a=r*r*3.141;
    c=2*3.141*r;
    d=2*r;
    printf("\nThe diameter of a circle is %f",d);
    printf("\nThe area of the circle is %f",a);
    printf("\nThe circumference of the circle is %f",c);

}