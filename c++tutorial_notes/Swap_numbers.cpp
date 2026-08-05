#include<iostream>
using namespace std;

void swap(int* p, int* q){
int temp;
temp=*p;
*p=*q;
*q=temp;
}

// int swap(int &x,  int & y){
//     x=x+y;
//     y=x-y;
//     x=x-y;
//    return 0;
// }
int main(){


    // int x, y;
    // cout<<"Enter first number x :";
    // cin>>x;
    // cout<<"Enter second nmber y:";
    // cin>>y;
    // swap(x, y);
    // cout<<x<<" "<<endl<<y;

    /*swapping through dereference/star operator*/
    int x,y;
    cout<<"Enter x : ";
    cin>>x;
    cout<<"enter y: ";
    cin>>y;
    swap(&x,&y);
    cout<<"After swapping x :"<<x<<endl<<"After swapping y:"<<y;
    

    return 0;
}