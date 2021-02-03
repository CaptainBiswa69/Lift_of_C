#include<stdio.h>
void main(){
    float Physics,Chemistry,Biology,Mathmetics,Computer,Percentage;
    printf("Enter the mark you obtained in Physics,Chemistry,Biology,Mathmetics,Computer: ");
    scanf("%f%f%f%f%f",&Physics,&Chemistry,&Biology,&Mathmetics,&Computer);
    Percentage=(Physics+Chemistry+Biology+Mathmetics+Computer)/500*100;
  
    if (Percentage>=90)
    {
        printf("Grade A");

    }
    else if (Percentage>=80)
    {
        printf("Grade B");

    }
    else if (Percentage>=70)
    {
        printf("Grade C");
    }
    else if (Percentage>=60)
    {
        printf("Grade D");
    }
    else if (Percentage>=40)
    {
        printf("Grade E");

    }
    else 
    {
        printf("Grade F");
    }

   

    
    

}