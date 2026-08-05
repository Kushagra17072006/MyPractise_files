#include<stdio.h>
int main(){
     int a, b, c, rem;
    printf ("Enter value of 1st number : ");
    scanf("%d",&a); 
    printf ("\nEnter value of 2nd number : ");
    scanf("%d",&b);
    c = a/b;
    rem = b - (a*c);
    printf("\nThe remainder when %d is divided by %d is %d\n",a,b,rem);
    
     return 0;

}