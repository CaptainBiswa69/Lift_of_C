#include<stdio.h>
#include<string.h>
int main(){
    int b,a,sum=0;
    
    printf("Enter a number: ");
    scanf("%d",&a);
    while(a>0){
        b=a%10;
        sum+=b;
        a=a/10;
    }
    printf("%d\n",sum);
    
}