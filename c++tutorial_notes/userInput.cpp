#include<iostream>
using namespace std;
int main(){
    // int x;
    // cout<<"enter the number : ";
    // cin>>x;
    // float y = (float) x;
    // cout<<"the half of number is : "<<y/2;
    // char ch;
    // cin>>ch;
    // cout<<ch;
    // int n;
    // cout<<"enter number : ";
    // cin>>n;
    // if(n<0)
    //     cout<<"the absolute value of number is : "<<-n;
    
    // else
    //     cout<<"the absolute value of number is : "<<n;
    // 
    int a ,b;
    char ch;
    cout<<"enter first number : "; cin>>a;
    cout<<"enter operation (+,/,*,-) : "; cin>>ch;
    cout<<"enter the 2nd number : ";cin>>b;
    if (ch == '+') {
        cout<<a+b;
    }
    if (ch == '-') {
        cout<<a-b;
    }
    if (ch == '*') {
        cout<<a*b;
    }
    if (ch =='/'){
    cout<<a/b;
    }
    else {
        cout<<"your operation is invalid";
    }
 }