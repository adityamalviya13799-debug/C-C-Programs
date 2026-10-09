//write a program to sum of digit;
// #include<stdio.h>
// int main(){

//   int n;
//   scanf("%d",&n);
//   int sum=0;
//   while(n!=0){
//     int lastdigit = n%10;
//     sum = sum + lastdigit;
//     n = n/10;
//   }
//   printf("Sum of digits: %d", sum);
//   return 0;
// }

// //write a program to print the sum of even numbers from 1 to n;
// #include<stdio.h>
// int main(){
//       int n;
//       printf("enter a number :");
//       scanf("%d",&n);
//       int sum = 0;
//       int lastdigit = 0;
//       while(n!=0)
//       {
//         lastdigit = n%10;
//         if(lastdigit%2==0)
//         {
//           sum = sum + lastdigit;
//         }
//         n=n/10;
//       }
//       printf("the sum of even digit :%d",sum);

//   return 0;
// }

//write a program for reverse of number
// #include<stdio.h>
// int main(){
// int n;
// printf("enter a number :");
// scanf("%d",&n);
// int r = 0;
// while(n!=0){
//   r = r*10;
//   r = r + n%10;
//   n = n/10;
// }
// printf(" the reverse of number :%d",r);

//   return 0;
// }

//write a program for reverse of number
// #include<stdio.h>
// int main(){
//    int n;
//    printf("enter a number :");
//    scanf("%d",&n);
//   return 0;
// }

// #include <stdio.h>

// float circle(float r) { return 3.14*r*r; }
// float square(float s) { return s*s; }
// float triangle(float b, float h) { return 0.5*b*h; }
// float rectangle(float l, float w) { return l*w; }

// int main()
// {
//     int ch;
//     float a, b;

//     printf("1.Circle\n2.Square\n3.Triangle\n4.Rectangle\n");
//     printf("Enter choice: ");
//     scanf("%d", &ch);

//     if(ch == 1) {
//         scanf("%f", &a);
//         printf("Area = %.2f", circle(a));
//     }
//     else if(ch == 2) {
//         scanf("%f", &a);
//         printf("Area = %.2f", square(a));
//     }
//     else if(ch == 3) {
//         scanf("%f %f", &a, &b);
//         printf("Area = %.2f", triangle(a,b));
//     }
//     else if(ch == 4) {
//         scanf("%f %f", &a, &b);
//         printf("Area = %.2f", rectangle(a,b));
//     }

//     return 0;
// }


// #include <stdio.h>

// int main()
// {
//     char grade;

//     printf("Enter grade (A-E): ");
//     scanf(" %c", &grade);

//     switch(grade)
//     {
//         case 'A':
//             printf("Excellent");
//             break;

//         case 'B':
//             printf("Very Good");
//             break;

//         case 'C':
//             printf("Good");
//             break;

//         case 'D':
//             printf("Average");
//             break;

//         case 'E':
//             printf("Fail");
//             break;

//         default:
//             printf("Invalid Grade");
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{
    int a, b;
    char op;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    if(op == '+')
        printf("Result = %d", a + b);
    else
    {
        if(op == '-')
            printf("Result = %d", a - b);
        else
        {
            if(op == '*')
                printf("Result = %d", a * b);
            else
            {
                if(op == '/')
                    printf("Result = %d", a / b);
                else
                    printf("Invalid operator");
            }
        }
    }

    return 0;
}
