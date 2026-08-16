 #include<iostream>
 #include<cmath>
using namespace std;
int main(){

    //  int n, sum=0;
    // sum=0;
    // cout<<"enter the number : ";
    // cin>>n;
    // while(n!=0){
    //     sum = n%10+sum;
    //     n=n/10;
    // }
    // cout<<sum;

     /*code for printing multiplication table*/
    //  int n;
    // cout<<"enter the number  whose table you want : ";
    // cin>>n;
    // for (int i = n; i<=10*n; i+=n){
    //     if (i%n==0){
    //         cout<<i<<" ";
    //     }
    // }

    /*sum of even numbers input here*/
    // int n, ld, sum = 0;
    // cout<<"Enter the number : ";
    // cin>>n;
    // while(n!=0){
    //     ld =  n%10;
    //     if (ld%2!=0) {
    //         n=n/10;}
    //     if (ld%2==0){
    //         n/=10;
    //         sum = ld+sum;
    //     } 
    // }
    // cout<<sum;

    /*Better and simpler version of above code*/
    // int n, ld, sum = 0;
    // cout << "Enter the number: ";
    // cin >> n;

    // while (n != 0) {
    //     ld = n % 10;
    //     if (ld % 2 == 0) {
    //         sum += ld;
    //     }
    //     n /= 10;
    // }

    // cout << "Sum of even digits: " << sum << endl;


    /*WAP to print reverse number*/
    // int n, ld, rev = 0;
    // cout << "Enter the number: ";
    // cin >> n;

    // while (n != 0) {
    //     ld = n % 10;
    //     n /= 10;
    //     rev = ld + rev*10;
    // }

    // cout << "reverse of number: " << rev << endl;

    /*WAP to Enter number till which you want sum*/
    // int n;
    // cout<<"Enter number till which you want sum : ";
    // cin>>n;
    // int sum = 0; 
    // for (int i = 1; i<=n ;i++){
    //     sum = i + sum;
    // }
    // cout<<sum;

    /*WAP to Enter number whose factorial you want*/
    // int n, fact = 1;
    // cout<<"Enter the number you want factorial : ";
    // cin>>n;
    //    for(int i=1; i<=n; i++){
    //     fact*=i;
    //    }
    
    // cout<<"the factorial of number n is :"<<fact<<endl;

    /*factorial of first n numbers*/
    // int n, fact;
    // cout<<"Enter the number : ";
    // cin>>n;
    // while(n!=0){
    //     fact = 1;
    //    for(int i=1; i<=n; i++){
    //     fact*=i;
    //    }
    //    n=n-1;
    //    cout<<fact<<" ";
    // }

    /*printing all ascii values and thier characters of af 26 alphabets*/
    // int n=65;
    // while (n<=90){
    //     cout<<n<<"  "<<char(n)<<endl;
    //     n++;
    // }

    /*pattern printing has started*/
    /*this is star printing in column and rows, generally it is reommended to use differnt variable instead of i if the another loop is nested, if the loop is not nested you can use i also....even in this question i chal raha tha bt not recommend fir j kardiya*/
//     int n, m;
//     cout<<"Enter no. of rows : ";
//     cin>>n;
//     cout<<"Enter no. of cols : ";
//     cin>>m;
//    for (int i = 1; i<=n;i++){
//     for (int j = 1; i<=m;j++){
//         cout<<"*"<<"  ";
//     }
//     cout<<endl;
//    }

//     int n, m;
//     cout<<"Enter no. of rows : ";
//     cin>>n;
//     cout<<"Enter no. of cols : ";
//     cin>>m;
//    for (int i = 1; i<=n;i++){
//     for (int j = 1; j<=m;j++){
//         cout<<j<<"  ";
//     }
//     cout<<endl;
//    }

//     int n, c=1;
//     cout<<"Enter number of sides of square : ";//1 1 1 1
//     cin>>n;                                    //2 2 2 2
//    for (int i = 1; i<=n;i++){                  //3 3 3 3
//     for (int j = 1; j<=n;j++){                 //4 4 4 4
//         cout<<c<<"  ";
//     }
//     cout<<endl;
//     c++;
//    }

//     int n;
//     cout<<"Enter length of square : ";
//     cin>>n;                                    
//    for (int i = 1; i<=n;i++){                  
//     for (int j = 65; j<=n+64;j++){                 
//         cout<<(char)(j)<<"  ";
//     }
//     cout<<endl;

//    }

/*upward triangle pattern printing*/
//   int n;
//     cout<<"Enter the sides of triangle : ";
//     cin>>n;
//    for (int i = 1; i<=n;i++){
//     for (int j =1; j<=i;j++){
//         cout<<"*"<<"  ";
//     }
//     cout<<endl;
//    }

// int n;
// cout<<"enter the lenth of side of number triangle : ";
// cin>>n;
// for(int i =1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//         cout<<j<<" ";
//     }
//     cout<<endl;
// }


// int n;
// cout<<"Enter sides of triangle : ";
// cin>>n;
// for(int i=65;i<=64+n;i++){
//     for(int j=65;j<=i;j++){
//         cout<<char(j)<<" ";
        
//     }
//     cout<<endl;
// }


/*0
  1 1
  2 2 2
  3 3 3 3
  4 4 4 4 4 output*/

// int n,c;
// cout<<"Enter the sides of triangle : ";
// cin>>n;
// c=0;

// for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//         cout<<c<<" ";
       
//     }
//     cout<<endl;
//     c++;
//     }

/*A A
B B B
C C C C output*/

// int n,c;
// cout<<"Enter the sides of triangle : ";
// cin>>n;
// c=1;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//         cout<<char(c+64)<<" ";
        
//     }
//     cout<<endl;
//     c++;
// }

/*Enter the sides of triangle : 6
1 
A B
1 2 3
A B C D
1 2 3 4 5
A B C D E F   output*/
// int n,c;
// cout<<"Enter the sides of triangle : ";
// cin>>n;
// for(int i=1;i<=n;i++){
//     if (i%2==0){
//     for(int j=1;j<=i;j++){
//         cout<<char(j+64)<<" ";}}
//         else{
//             for(int j=1;j<=i;j++){
//         cout<<j<<" ";

//         }
        
//     }
//     cout<<endl;
    
// }

/* With the help of continue statement printing odd numbers and skipping even nums*/
// int i;
// for ( i=1;i<=100;i++){
//     if (i%2==0) continue;
//     cout<<i<<" ";
// }

/*code of reverse triangle including number and alphabet, using nested loop and if else conditioon*/
// int n ;
// cout<<"Enter side of flipped triangle : ";
// cin>>n;
// for (int i=1; i<=n ; i++){
//     for(int j=1; j<=n+1-i ; j++ ){
//             if(i%2!=0){
//             cout<<char(j+64)<<" ";
//         }
//          else {
//             cout<<j<<" ";
//         }
//     }
//     cout<<endl;
// }



// int n, s;
// cout<<"Enter length of triangle : ";
// cin>>n;
// s=n;
// for (int i=1;i<=n;i++){             //4\n43\n432\n4321 
//     for(int j=1;j<=i;j++){
//         cout<<n-j+1<<" ";
//     }
//     cout<<endl;
// }

/*Floyd Triangle*/
//  int n, s;
// cout<<"Enter length of triangle : ";
// cin>>n;
// s=1;
// for (int i=1;i<=n;i++){             
//     for(int j=1;j<=i;j++){
//         cout<<s++<<" ";
       
//     }
//     cout<<endl;
// }


/*0-1 triangle*/
// int n;
// cout<<"Enter length of triangle : ";
// cin>>n;
// for(int i=1; i<=n;i++){
//     for(int j=1; j<=i ;  j++){
//         if((i+j)%2==0){
//             cout<<1<<" ";
//         } else{
//             cout<<0<<" ";
//         }
//     }
//     cout<<endl;
// }

/*plus pattern*/
// int n;
// cout<<"enter length : ";
// cin>>n;
// int mid = n/2+1;
// for(int i =1; i<=n;i++){
//     for(int j=1; j<=n; j++){
//         if(i==mid || j==mid){
//         cout<<"* ";}
//         else cout<<"  ";
//     }
//     cout<<endl;
// }


/*Hollow rectangle pattern */
// int n, m;
// cout<<"enter length of rectangle : ";
// cin>>n;
// cout<<"enter width of rectangle : ";
// cin>>m;
// for(int i=1; i<=n; i++){
//     for(int j=1 ; j<=m ; j++){
//         if(i==1||i==n||j==1||j==m){
//     cout<<"* ";}
//     else cout<<"  ";

//     }
//     cout<<endl;
// }

/* x pattern*/
// int n;
// cout<<"enter length of rectangle : ";
// cin>>n;
// for(int i=1; i<=n; i++){
//     for(int j=1 ; j<=n ; j++){      
//         if(j==i||j==n+1-i){
//     cout<<"* ";}
//     else cout<<"  ";

//     }
//     cout<<endl;
// }

/* flipped triangle two nested loops in one for loop*/

// int n;
// cout<<"Enter length  ";
// cin>>n;
// for(int i = 1 ; i<=n; i++){
//     for(int j=1; j<=n-i+1; j++){
//         cout<<"  ";
//     }
//     for (int j=1; j<=i ; j++){
//         cout<<j<<" ";
//     }
//     cout<<endl;
// }

/*rhombus*/
// int n;
// cout<<"Enter length  ";
// cin>>n;
// for(int i = 1 ; i<=n; i++){
//     for(int j=1; j<=n-i+1; j++){
//         cout<<"  ";
//     }
//     for (int j=1; j<=n ; j++){
//         cout<<"* ";
//     }
//     cout<<endl;
// }

/*combination from permutation and combination,for long nums use long long instead of int */
// int n,r, a=1, b=1, c=1;
// cout<<"From how much : ";
// cin>>n;
// cout<<"How many : ";
// cin>>r;
// int p = n-r;

// if(n>r){
// for(int i=1; i<=n; i++){
//     a *= i;
    
// }
// for(int j=1; j<=r; j++){
//     b *= j;
    
// }

// for(int k=1; k<=p; k++){
//     c *= k;
    
// }
// cout<<"The combination of your numbers are : "<< a/(b*c);}

// else cout<<"the input of number  is incorrect total cannot be small";
    

// int n;
// cout<<"Enter n: ";
// cin>>n;
// for (int i=1; i<=n; i++){
//     for (int j= 1; j<=i; j++){
//         cout<<j<<" ";}
//         for(int k=1; k<=n-i; k++){
//             cout<<i<<" ";
//         }
    
//     cout<<endl;
// }

//OR
//This one is better
//  int n;
// cout<<"Enter n: ";
// cin>>n;
// for (int i=1; i<=n; i++){
//     for (int j= 1; j<=n; j++){
//         cout<<min(i,j)<<" ";}
        
//     cout<<endl;
//     }


/*new pattern :)*/

// int n;
// cout<<"Enter n: ";
// cin>>n;
// for (int i=1; i<=n/2; i++){
//     for (int j= 1; j<=n/2; j++){
//         cout<<min(i,j)<<" ";}
//         for(int j=n/2+1; j>=1; j--){
//             cout<<min(i,j)<<" ";
//         }
    
//     cout<<endl;
// }
// for (int i=n/2+1; i>=1; i--){
//     for (int j= 1; j<=n/2; j++){
//         cout<<min(i,j)<<" ";}
//         for(int j=n/2+1; j>=1; j--){
//             cout<<min(i,j)<<" ";
//         }
    
//     cout<<endl;
// }

//OR

// int n;
// cout<<"Enter n: ";
// cin>>n;
// for (int i=1; i<=n; i++){
//     for (int j= 1; j<=n; j++){
//         if(j>(n/2)+1){
//             cout<<min(i,n-j+1)<<" ";
//         }
//         else if(i>(n/2)+1){
//             cout<<min(n-i+1,j)<<" ";
//         }
//         else cout<<min(i,j)<<" ";}
    
//     cout<<endl;
// }

/*Spiral pattern*/
// int n;
// cout<<"Enter n: ";
// cin>>n;
// for (int i=1; i<=n; i++){
//     for (int j= 1; j<=n; j++){
//         cout<<min(i,j)<<" ";}
//         for(int j=n-1; j>=1; j--){
//             cout<<min(i,j)<<" ";
//         }
    
//     cout<<endl;
// }
// for (int i=n-1; i>=1; i--){
//     for (int j= 1; j<=n; j++){
//         cout<<min(i,j)<<" ";}
//         for(int j=n-1; j>=1; j--){
//             cout<<min(i,j)<<" ";
//         }
    
//     cout<<endl;
// }

//OR

// int n;
// cout<<"Enter n: ";
// cin>>n;
// for (int i=1; i<=2*n-1; i++){
//     for (int j= 1; j<=2*n-1; j++){
//         int a=i, b=j;
//         if(j>n) b= 2*n-j;
//         if(i>n) a= 2*n-i;
//         cout<<min(a,b)<<" ";}
    
//     cout<<endl;
// }


    return 0;
}


