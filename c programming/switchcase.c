#include <stdio.h>
int main()
{
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks); 
    switch (marks)
    {
    case 90 ... 100:
        printf("Grade A\n");
        break;
    case 80 ... 89:
        printf("Grade B\n");
        break;
    case 70 ... 79:
        printf("Grade C\n");
        break;
    case 60 ... 69:
        printf("Grade D\n");
        break;
    case 50 ... 59:
        printf("Grade E\n");
        break;
    default:
        printf("Grade Fail\n");
    }
    return 0;
}