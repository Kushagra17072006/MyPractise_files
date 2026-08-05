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

    // int n;
    // cout<<"enter the number  whose table you want : ";
    // cin>>n;
    // for (int i = n; i<=10*n; i+=n){
    //     if (i%n==0){
    //         cout<<i<<" ";
    //     }
    // }

    //  int n;
    // cout<<"enter the number the number of terms you want : ";
    // cin>>n;
    // for (int i = 4; i<=3*n+1; i+=3){
    //     cout<<i<<" ";
    //     }
    
    // for (int i = 1; i<101; i++){
    //     if (i%2==0) continue;//continue statement skips that following step in the loop, yaha pe even number ko skip kar raha hai
    //     cout<<i<<" ";
    //     }

    // for(int i = 1; i>0; i++){
    //     cout<<i<<endl;
    // }
    
    //aski value of characters
    /*char ch;
    cout<<"enter the character : ";
    cin>>ch;
    cout<<"the aski value of character is : "<<int(ch);*/

    //to comment anything very important we can use /*.....*/ this type of commenting
    /* this is a multi-line comment */
    /*char ch;
    cout<<"enter the character : ";
    cin>>ch;
    cout<<"the aski value of character is : "<<int(ch);*/
    
    // int x=4,y=0;
    // while (x>=0){
    //     x--;
    //     y++;
    //     if(x==y)
    //     continue;
    //     else
    //     cout<<x<<" "<<y<<endl;
    // }

    /* important logic*/
    // int n, sum=0;
    // sum=0;
    // cout<<"enter the number : ";
    // cin>>n;
    // while(n!=0){
    //     sum = n%10+sum;
    //     n=n/10;
    // }
    // cout<<sum;

    /* For multiplication*/
    // int n, sum;
    // sum=1;
    // cout<<"enter the number : ";
    // cin>>n;
    // while(n!=0){
    //     sum = n%10*sum;
    //     n=n/10;
    // }
    // cout<<sum;
    

    /*wrong code need to correct it!*/
    // int n, sum=0, ld;
    // sum=0;
    // cout<<"enter the number : ";
    // cin>>n;//don't enter zeroes in number
    // while(n!=0){
    //     ld=n%10;
    //     if (ld%2!=0){
    //        sum = ld+sum;
    //         n=n/10;
    //     }else{
    //        sum = ld+sum;
    //         n=n/10;
    //     }
    // }
    // cout<<sum;


    return 0;
}