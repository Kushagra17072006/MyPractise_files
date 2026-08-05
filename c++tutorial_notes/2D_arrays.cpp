#include<iostream>
using namespace std;

int main(){


/*Adding 10 in 2D array*/
// int arr[5][5];
// int i=0;
// for(int i=0; i<=4; i++){
//     for(int j=0; j<=4 ; j++){
//     arr[i][j]=10;
//     }
// }

// for(int i=0; i<=4; i++){
//     for(int j=0; j<=4 ; j++){
//         cout<<arr[i][j]<<" ";
//     }
// cout<<endl;
// }


/*Adding 2D arrays*/
// int a[4][3], b[4][3],c[4][3];
// for(int i=0; i<=3; i++){
//     for(int j=0; j<=2; j++){
//         cout<<"Enter "<<i<<" element in "<<j<<" row : ";
//         cin>>a[i][j];
//     }
// }
// cout<<"1st array :"<<endl;
// for(int i=0; i<=3; i++){
//     for(int j=0 ; j<=2 ; j++){
//         cout<<a[i][j]<<"  ";
//     }
//     cout<<endl;
// }
// for(int i=0; i<=3; i++){
//     for(int j=0; j<=2; j++){
//         cout<<"Enter "<<i<<" element in "<<j<<" row : ";
//         cin>>b[i][j];
//     }
// }
// cout<<"2nd array :"<<endl;
// for(int i=0; i<=3; i++){
//     for(int j=0 ; j<=2 ; j++){
//         cout<<b[i][j]<<"  ";
//     }
//     cout<<endl;
// }
// for(int i=0; i<=3; i++){
//     for(int j=0; j<=2; j++){
//         c[i][j]=a[i][j]+b[i][j];
//     }
// }
// cout<<"After adding elements of both arrays :"<<endl;
// for(int i=0; i<=3; i++){
//     for(int j=0 ; j<=2; j++){
//         cout<<c[i][j]<<"  ";
//     }
//     cout<<endl;
// }


/*Finding the maximum element*/
// int a[4][3],mx=INT_MIN;
// for(int i=0; i<=3; i++){
//     for(int j=0; j<=2; j++){
//         cout<<"Enter "<<i<<" element in "<<j<<" row : ";
//         cin>>a[i][j];
//     }
// }
// for(int i=0; i<=3; i++){
//     for(int j=0; j<=2; j++){
//         mx=max(mx, a[i][j]);
//     }
// }

// cout<<" Array :"<<endl;
// for(int i=0; i<=3; i++){
//     for(int j=0 ; j<=2 ; j++){
//         cout<<a[i][j]<<"  ";
//     }
//     cout<<endl;
// }
// cout<<" the maximum element in array is : "<<mx;//same way we can find the minimum element


/*Sum of all elements in array*/
// int a[4][3],sum=0;
// for(int i=0; i<=3; i++){
//     for(int j=0; j<=2; j++){
//         cout<<"Enter "<<i<<" element in "<<j<<" row : ";
//         cin>>a[i][j];
//     }
// }
// for(int i=0; i<=3; i++){
//     for(int j=0; j<=2; j++){
//         sum+=a[i][j];
//     }
// }
// cout<<" Array :"<<endl;
// for(int i=0; i<=3; i++){
//     for(int j=0 ; j<=2 ; j++){
//         cout<<a[i][j]<<"  ";
//     }
//     cout<<endl;
// }
// cout<<"Sum of all array elements : "<<sum;

/*Multiplying elements in array*/
// int a[4][3],mul=1;
// for(int i=0; i<=3; i++){
//     for(int j=0; j<=2; j++){
//         cout<<"Enter "<<i<<" element in "<<j<<" row : ";
//         cin>>a[i][j];
//     }
// }
// for(int i=0; i<=3; i++){
//     for(int j=0; j<=2; j++){
//         mul*=a[i][j];
//     }
// }
// cout<<" Array :"<<endl;
// for(int i=0; i<=3; i++){
//     for(int j=0 ; j<=2 ; j++){
//         cout<<a[i][j]<<"  ";
//     }
//     cout<<endl;
// }
// cout<<"multiplication of all array elements : "<<mul;


//basically koi bhi do coordinate dediya jaye toh uske through rectangle form karke jo elements un rectangle mai hoga usey add kardo, rectangle for loop ke through banana hai aur limits coordinate mai de rakhi hai
// int a[3][3]={20,68,84,52,89,65,26,65,64}, sum=0;
// for(int i=0; i<=2; i++){
//     for(int j=0; j<=2 ; j++){
//         cout<<a[i][j]<<" ";
//     }
//     cout<<endl;
// }
// //adding elements from a[0,1] to a[2,2], making rectangle
// for(int i=0; i<=2; i++){
//     for(int j=1; j<=2 ; j++){
//         sum+=a[i][j];
//     }
// }
// cout<<"sum of elements in rectngle : "<<sum;




}


