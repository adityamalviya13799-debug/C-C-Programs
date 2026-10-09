// #include<stdio.h>
// int main(){
// int x;
// printf("Enter the number");
// scanf("%d",&x);
// if(x%2==0){   //comparison me humesha double equal lagta h
//     printf("It is an even number");
// }
// if(x%2!=0){   //  ! ka matlb hota h not compare

//     printf("It is an odd number  ");
// }

//     return 0;
// }

// Other way to make an program of Even odd number
//  #include<stdio.h>
//  int main(){
//      int x;
//      printf("Enter the number");
//      scanf("%d",&x);
//      if(x%2==0){
//          printf("It is an even number");
//      }
//      else{
//          printf("It is an odd number");
//      }

//     return 0;
// }

// Take positive integer which is divisible by 5 or not
// #include<stdio.h>
// int main(){
//     int x;
//     printf("Enter the number ");
//     scanf("%d",&x);
//     if(x%5==0){
//         printf("it is divisible by 5");

//     }
//     else{
//         printf("it is not divisible by 5");
//     }

//     return 0;
// }

// write a programme to check leap or not
// #include<stdio.h>
// int main(){
//     int year;
//     printf("Enter the year");
//     scanf("%d",&year);
//     if(year%4==0){
//         printf("It is a Leap year");
//     }
//     else{
//         printf("it is not Leap year");
//     }

//     return 0;
// }

// practice program
/*#include <stdio.h>
int main()
{
    int Physics, Chemistry, Maths;
    float total;
    printf("enter physics marks\n");
    scanf("%d", &Physics);
    printf("enter chemistry marks\n");
    scanf("%d", &Chemistry);
    printf("enter maths marks\n");
    scanf("%d", &Maths);
    total = (Physics + Chemistry + Maths) / 3;
    if (total > 40 || Physics > 33 || Chemistry > 33 || Maths > 33)
    {
        printf("your total marks is %f,you are passed", total);
    }
    else
    {
        printf("your total marks is %f,you are failed", total);
    }

    return 0;
}*/

#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("enter value :");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a > b && a > c && a > d)
    {
        printf(" %d is greater", a);
    }
    else if (b > c && b > d && b > a)
    {
        printf(" %d is greater", b);
    }
    else if (c > b && c > a && c > d)
    {
        printf(" %d is greater", c);
    }
    else
    {
        printf("%d is greater", d);
    }

    return 0;
}

// #include<stdio.h>
// int main(){
//     int
//     scanf("%d",&year)

//     return 0;
// }