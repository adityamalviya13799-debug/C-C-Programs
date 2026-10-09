// #include<stdio.h>
// int main(){
// int x;
// printf("enter the number :");
// scanf("%d",&x);
// if(x%3==0){
//     if(x%5==0){//condition esi h isme ki pehle first condition satisfy hogi then dusri condition satisfy hogi
//         printf("it is divisible by 3 and 5");
//     }
// else{
//     printf("it is not divisibled by 3 and 5");
// }
// }
// else{
//     printf("it is not divisibled by 3 and 5 ");// agar dono condition satisfy nhi hui ye output generate hoga
// }
// return 0;
// }


//write a program for the number which is divisible 5 or 3.
// #include<stdio.h>
// int main()
// {
//     int x;
//     printf("Enter the number :");
//     scanf("%d",&x);
//     if ((x%3==0||x%5==0)&&(x%15!=0))
//     {
//         // // if(x%15!=0)
//         // {
//         //     printf("it is divisible by 3 or 5 but not 15 :");
//         // }
//         printf("it is divisible by 3 or 5 but not 15 :");
//     }
//     else
//     {
//         printf("it is not divisible by 3 and 5 :");
//     }
//         // else{
//         //     printf("it is divisibled by 3 or 5 but not 15 :");
            

//         // }
//         return 0;
// }


//write a program to find out of three number, and which one is greatest
#include<stdio.h>
int main(){
int x,y,z;
printf("enter the first number :");
scanf("%d",&x);
printf("enter the second number :");
scanf("%d",&y);
printf("enter the third number :");
scanf("%d",&z);
if(x>y){
    if(x>z) //x>y>z
    printf("%d is greatest",x);
    else //z>x
    printf("%d is greatest",z);
}
else{
    if(y>z)
    printf("%d is greatest",y);
    else//z<y<x
    printf("%d is greates",z);


}

    return 0;
}
    