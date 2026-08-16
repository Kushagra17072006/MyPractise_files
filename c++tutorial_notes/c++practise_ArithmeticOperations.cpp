#include<iostream>
using namespace std;
int main(){
    // int a, b;
    // char ch;
    // cin>>a;
    // cin>>ch;
    // cin>>b;
    // if (ch == '+') cout<<a+b;
    // if (ch == '-') cout<<a-b;
    // if (ch == '*') cout<<a*b;
    // if (ch == '/') cout<<a/b;
    // if (ch == '%') cout<<a%b;
    // else cout<<"invalid operation";
   
    // {table of 19 using for loop} :
    // for (int i =1; i<=20; i++){
    //      cout<<19*i<<" ";
    // }
    
    // {table of 19 using for loop and if else condition where we can decide the limit of output produced} :
    // for (int i =19; i<=190; i++){
    //      if (i%19==0){
    //         cout<<i<<" ";
    //      }
    // }
    

    // best method where loop will not  run 20 times and 19 times and 172 (as i=19 i.e. 190-18 times loopwill run)times like it was running earlier
    //it will run only 10 times

    // for (int i =19; i<=190; i+=19){  //i+=19 means i=i+19
    //      if (i%19==0){
    //         cout<<i<<" ";
    //      }
    // }

    int n;
    for (int i = n; i<=10*n; i+=n){
        if (i%n==0){
            cout<<i<<" ";
        }
    }


    return 0;
}