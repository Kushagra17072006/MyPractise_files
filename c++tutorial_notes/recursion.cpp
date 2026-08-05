#include<iostream>
using namespace std;

/* Finding the nth fibonacci number using recursion*/
// int fibo(int n){
//     if(n==1||n==2||n<0) return 1;
//     return fibo(n-1)+fibo(n-2);
// }

 /*a power b result*/
// int power(int a, int b){
//     if(b==0||b<0) return 1;
//     return a*power(a,b-1);
    
// }

/*factorial using recursion*/
int fact(int n){
    if (n==1 || n==0) return 1;
    return n*fact(n-1);
}

 /*sum of numbers using recursion*/
// int sum(int n){
//     if (n==1) return 1;
//     return n+sum(n-1);
// }
int main(){

    /*sum of numbers using recursion*/
    // int n;
    // cout<<"Enter number till sum you want : ";
    // cin>>n;
    // cout<<sum(n);

    /*factorial using recursion*/
    int n;
    cout<<"enter factorial number :";
    cin>>n;
    cout<<fact(n);

    /*a power b result*/
    // int x,y;
    // cout<<"Enter base :";
    // cin>>x;
    // cout<<"Enter the power :";
    // cin>>y;
    // cout<<x<<" Raised to the power "<<y<<" is "<<power(x,y);

    /* Finding the nth fibonacci number using recursion*/
    // int n;
    // cout<<"enter number : ";
    // cin>>n;
    // cout<<"the "<<n<<"th fibonacci number is : "<<fibo(n);


}