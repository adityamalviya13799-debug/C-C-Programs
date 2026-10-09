
//count grade system
#include<stdio.h>
int main(){
    int marks;
    printf("Enter the marks :");
    scanf("%d",&marks);
if(marks>90){
    printf("A grade\n");
}
    else if(marks>70)
{
    printf("B grade\n");
}
else if(marks>50){
    printf("C grade\n");
}
else {
printf("D grade");
}
   
return 0;
}