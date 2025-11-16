#include<stdio.h>
int main(){
    float a,b,c;
    printf("enter the value of a :\n");
    scanf("%f",&a);
    printf("enter the value of b :\n");
    scanf("%f",&b);
    printf("enter the value of c :\n");
    scanf("%f",&c);

    float sum = a + b + c;
    printf(" sum of three number is %f :\n",sum);
    
    float average = (a + b + c)/3 ;
    printf("avrg of 3 number is %f :\n",average);
    
    return 0;


}