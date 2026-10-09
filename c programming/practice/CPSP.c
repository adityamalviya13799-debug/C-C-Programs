// #include<stdio.h>
// int main(){
//     int cost_price;
//     printf("enter the cost price");
//     scanf("%d",&cost_price);
//     int selling_price;
//     printf("enter the selling price");
//     scanf("%d",&selling_price);
     
//     int x = (selling_price-cost_price)*100/cost_price;
//    if(selling_price>cost_price){
//         printf("profit is :%d",x);
//    }
//    else {
//     printf("loss:%d",-1*x);
//    }
//     return 0;

// }

//Ques : Given the length and breadth of a rectangle,
//write a program to find whether the area of the
//rectangle is greater than its perimeter.

#include<stdio.h>
int main(){
    int length;
    printf("Enter the length :");
    scanf("%d",&length);
    int breadth;
    printf("Enter the breadth");
    scanf("%d",&breadth);
    int Area = length * breadth;
    printf("area is :%d\n",Area);
    int perimeter = 2*(length + breadth);
    printf("%d",perimeter);
    if(Area>perimeter){
        printf("true");
    }
    else{
        printf("false");
    }
    return 0;
}