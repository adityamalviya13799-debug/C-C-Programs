// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//     printf("Aditya malviya\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     for(int i=1;i<=10;i++){
//         printf("Aditya Malviya\n");
//     }
//     return 0;
// }

// print the number from 1 to 100
// #include<stdio.h>
// int main(){
//     int x = 1;
//     for(int x=1;x<=100;x=x+1){
//         printf("%d\n",x);
//     }
//     return 0;
// }

// print all even number upto 100
// #include<stdio.h>
// int main(){
//     for(int i=0;i<=100;i=i+2){
//         printf("%d\n",i);
//     }
//     return 0;
// }

// print table of 19
//  #include<stdio.h>
//  int main(){
//      for(int i=19;i<=190;i=i+19){
//          printf("%d\n",i);
//      }
//      return 0;
//  }

// print the table which input by user
//  #include<stdio.h>
//  int main(){
//      int n;
//      int p=0;
//      printf("Enter the number");
//      scanf("%d",&n);
//      for(int i=1;i<=10;i++){
//          p=n+p;
//          printf("%d\n",p);
//      }
//      return 0;
//  }

// to make an program of nth term of an odd term
//  #include<stdio.h>
//  int main(){
//      int n;
//      printf("Enter the number");
//      scanf("%d",&n);
//      for(int i=1;i<=2*n-1;i=i+2){

//         printf("%d ",i);
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number :");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i=i+1){
//         printf("%d ",i*2);
//     }
//     return 0;
// }
// create an AP of 4,7,10.......n th term
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number :");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         printf("%d ",i+3);
//     }
//     return 0;
// }

// GP series question
//  #include<stdio.h>
//  int main(){
//  int n;
//  printf("enter the number :");
//  scanf("%d",&n);
//  for(int i=1;i<=n;i++){
//      n=n*4;
//      printf("%d ",n*4);

// }

//     return 0;
// }

// print the table , take input n.
//  #include<stdio.h>
//  int main(){
//  int n;
//  printf("Enter the number :");
//  scanf("%d",&n);
//  for(int i=1;i<=10;i=i+1){
//      printf("%d\n",i*n);
//  }
//      return 0;
//  }

// write a program of 100,50,25.......upto positive number
// #include<stdio.h>
// int main(){
// int n;
// printf("enter a number :");
// scanf("%d",&n);
// float x=100;
// for(int i;i<=n;i++){
//     printf("%f ",x);
//     x=x/2;
// }
//     return 0;
// }
// write a program to find prime number
// #include<stdio.h>
// int main(){
// int n;
// printf("enter a number");
// scanf("%d",&n);
// int a=0;
// for(int i=2;i<=n-1;i++){
//     if(n%i==0){
//         a=1;
//         break;
//     }
// }
// if(n==1) printf("it is neither composite nor prime ");
// else if(a==0) printf("it is prime number");
// else printf("it  is composite number");

//     return 0;
// }

// write a program for evennumber for 1 to 100 in continue statement
//  #include<stdio.h>
//  int main(){
//      int n;
//      for(int i=1;i<=100;i++){
//          if(i%2==0){
//          continue;
//      }

//     printf("%d ",i);
// }
//     return 0;
// }

// print numbers from 1 to 100 in continue statement
//  #include<stdio.h>
//  int main(){
//      int n;
//      for(int i=1;i<=10;i++){
//          printf("%d ",i);

//     }
//     return 0;
// }

// print a number from 10 to 1
//  #include<stdio.h>
//  int main(){
//      int n;
//      for(int i=10;i<=10;i=i-1){
//          printf("%d",i);

//     }    doubt in this question

//     return 0;
// }

// print all even number 1 to 100
//  #include<stdio.h>
//  int main(){
//      int n;
//      for(int i=2;i<=100;i=i+2){
//          printf("%d ",i);
//      }
//      return 0;
//  }

// print all odd numbes from 1 to 100
//  #include<stdio.h>
//  int main(){
//      int n;
//      for(int i=1;i<=100;i=i+2){
//          printf("%d ",i);
//      }
//  }

// print the multiplication table of a given number
//  #include<stdio.h>
//  int main(){
//      int n;
//      printf("enter a number :");
//      scanf("%d",&n);
//      for(int i=1;i<=10;i++){
//          printf("%d\n",n*i);
//      }

//     return 0;
// }

// find sum of all number from 1 to n
//  #include<stdio.h>
//  int main(){
//      int n;
//      printf("enter a number :");
//      scanf("%d",&n);
//      int a=0;
//      for(int i=1;i<=n;i++){
//          a=a+i;
//      }
//      printf("sum of all numbers from 1 to %d is %d",n,a);
//      return 0;
//  }

// find sum of all even number from 1 to n
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("enter a number :");
//     scanf("%d", &n);
//     int a = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         if (i % 2 == 0)
//         {
//             a = a + i;
//         }
//     }
//     printf("sum of all even numbers from 1 to %d is %d", n, a);
//     return 0;
// }

// find the factorial of a number
#include <stdio.h>
    int main()
{
    int n;
    int a = 1;
    printf("enter the number :");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        a = a * i;
    }
    printf("factorial = %d", a);
    return 0;
} 

//sum of number from 1 to n.
// #include<stdio.h>
// int main(){
// int n;
// printf("enter the number :");
// scanf("%d",&n);
// // int sum = n*(n+1)/2;
// // printf("%d",sum);
// int a=0;
// for(int i=1;i<=n;i++){
    
//     a=a+i;
// }
// printf("%d",a);
//     return 0;
// }