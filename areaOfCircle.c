// #include<stdio.h>
// int main () {
    
//   float r ;
//   printf("enter the value of r:\n");
//   scanf("%f",&r);
//   float pie = 3.1476;
//  float area = (pie * r * r);

//  printf("area of circle is %f",area);
  
//   return 0;
// }
#include<stdio.h>
int main () {
    double radius, area;
     printf("enter the value of radius:\n");
    scanf("%lf",&radius);

    float pie = 3.14;
    area = (pie * radius * radius);

    printf("area of circle is %2e \n",area );
    return 0;
}