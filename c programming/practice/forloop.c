// #include<stdio.h>
// int main(){  //ap series concept
//     int n;
//      printf("enter the number");
//     scanf("%d",&n);
//     int x=4;
   
//     for(int i=1;i<=n;i=i+1){
//         printf("%d\n",x);
//         x = x + 3;

//     }
//     return 0;
// }

//GP series concept
// #include<stdio.h>
// int main(){
// int n;
// printf("Enter a number : ");
// scanf("%d",&n);
// // 1 2 4 8 16 32
// int a = 1;
// for(int i=1;i <= n;i++){
// printf("%d ",a);
// a = a*2;
// }
// return 0;
// }

//Gp series 3,12,48.....
// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter a number :");
//     scanf("%d",&n);
//     int x=1;
//     for(int i=1;i<=n;i++){
//         printf("%d ",x*3);
//         x=x*3;
//     }
//     return 0;
//}

//write a program ....100,97,94........up to positive number
// #include<stdio.h>
// int main (){
// // int n;
// // printf("enter a number :");
// // scanf("%d",&n);
// int x=100;
// for(int i=1;x>0;i++){
//     printf("%d ",x);
//     x=x-3;
// }
//     return 0;
// }

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
 #include<stdio.h>
 int main(){
int n;
printf("enter a number :");
scanf("%d",&n);
int a=0;
for(int i=2;i<=n-1;i++){
    if(n%i==0){
        a++;
    }
}   
if(a==0){
    printf("the number is prime");
}
else{
    printf("the number is not prime");
}
    return 0;
}   