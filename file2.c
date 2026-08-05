#include <stdio.h>
// int main(){
//     int year;
//     printf("enter year : ");
//     scanf("%d",&year);
//     if (year%4==0)
//     {
//         printf("Year is a leap year");
//     }
//     else{printf("year is not a leap year");
//     }
int main()
{
    // int a;
    // printf("Enter number : ");
    // scanf("%d",&a);
    // if (a<0)
    // {
    //     printf("the absolute value is : %d", -1*a);
    // }
    // else{
    //     printf("the absolute value is : %d",a);
    // }

    // int cp, sp, n;
    // printf("enter cost price : ");
    // scanf("%d",&cp);
    // printf("enter selling price : ");
    // scanf("%d",&sp);

    // n = sp - cp;

    // if (n>0)
    // {
    //     printf("The seller has made profit of %d",n);
    // }
    // if (n<0)
    // {
    //     printf("The seller has made loss of %d",n);
    // }

    int a;
    printf("Enter number : ");
    scanf("%d", &a);
    if (a > 0 && a % 5 == 0)
    {
        printf("the number is divisible by 5");
    }
    if (a > 0 && a % 3 == 0)
    {
        printf("the number is divisible by 3");
    }

    return 0;
}
