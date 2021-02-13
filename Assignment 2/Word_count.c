#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int c=0;
    printf("Enter your string: ");
    gets(str);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==' '){
            c++;
            
        }
    }
    printf("Total Number of word present in your string is: %d\n",c+1);
}