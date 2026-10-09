#include<stdio.h>
int main(){
    // int age;
    // printf("Enter your age: ");
    // scanf("%d",&age);
    // printf("Your age is : %d\n",age);
//     int a,b;
//     printf("enter the first number : ");
//     scanf("%d",&a);
//     printf("enter the second number : ");
//     scanf("%d",&b);
//     printf("the sum of %d and %d is :%d\n",a,b,a+b);
// int x;
// printf("enter the number : ");
// scanf("%d",&x);
// printf("%d",x%2==0);



// progrram to calculate gross salary
// float basic,hra,da,gross;
// printf("Enter the basic salary : ");
// scanf("%f",&basic);
// da = basic*40/100;
// hra = basic*20/100;
// gross = basic + da + hra;
// printf("the gross salary is : %.2f",gross);


//program to calculate km to meters,cm, inches,feet
// float km,meters,cm,inches,feet;
// printf("Enter the distance in km : ");
// scanf("%f",&km);
// meters = km*1000;
// cm = meters*100;
// inches = cm/2.54;
// feet = inches/12;
// printf("the distance in meters is :%.2f\n",meters);
// printf("the distance in cm is :%.2f\n",cm); 
// printf("the distance in inches is :%.2f\n",inches);
// printf("the distance in feet is :%.2f\n",feet);


//write a program to find aggreate marks and percentage of a student
float marks1,marks2,marks3,marks4,marks5,total,percentage;
printf("enter the marks of 5 subjects : ");
scanf("%f%f%f%f%f",&marks1,&marks2,&marks3,&marks4,&marks5);
total = marks1 + marks2 + marks3 + marks4 + marks5;
percentage = (total/500)*100;
printf("the aggregate marks is : %.2f\n",total);
printf("the percentage is : %.2f\n",percentage);

    return 0;
}
