#include<iostream>
#include <vector>
using namespace std;

    
int main(){

/*printing max element*/
// int a[3][4]={{1,2,3,4},{5,6,11,9},{4,5,6,7}}; //atleast column should  be written if row not
// int max=INT_MIN;
// for(int i=0; i<3; i++){
//     for (int j = 0; j< 4; j++){
//    if(max<a[i][j])
//     max=a[i][j];
//    }
// }
// cout<<max;

//printing elements in snake pattern (column wise)
// int a[][4]={{1,2,3,4},{5,6,8,9},{4,5,6,7},{10,11,12,13}}; //atleast column should  be written if row not
// for(int i=0; i<4; i++){
 
//     if(i%2==0){
//         cout<<" ";
//     for(int j=0; j<4 ; j++){
//         cout<<a[i][j]<<" ";
//     }}

//    else{
//     cout<<" ";
//     for(int j=3; j>=0 ; j--){
//         cout<<a[i][j]<<" ";
//     }}

// }


// int a[3][4]={{1,2,3,4},{5,6,11,9},{4,5,6,7}}; //atleast column should  be written if row not
// int sum=0;
// for(int i=0; i<3; i++){
//     for (int j = 0; j< 4; j++){
//    sum+=a[i][j];
//    }
// }
// cout<<sum;

/*printing row with maximum sum*/
// int a[3][4]={{1,2,3,4},{5,6,11,9},{4,5,6,7}}; //atleast column should  be written if row not
// int maxsum = INT_MIN, index=-1;
// for(int i=0; i<3; i++){
//     int sum=0;
//     for (int j = 0; j< 4; j++){
//    sum+=a[i][j];
//    }
//    if(sum>maxsum) maxsum=sum;
//    index=i;
// }
// cout<<maxsum<<"  "<<index;

/*printing minimum elemnt out off maximum elements of each row*/
// int a[3][4]={{1,2,3,4},{5,6,11,9},{4,5,6,7}}; //atleast column should  be written if row not
// int max=INT_MIN,min=INT_MAX, index=-1;
// for(int i=0; i<3; i++){
//     for (int j = 0; j< 4; j++){
//    if(max<a[i][j])
//     max=a[i][j];
//    }
//    if(max<min){min=max;
//    index=i;}
// }
// cout<<min<<"  "<<index;

//printing elements in snake pattern  (row wise)
// int a[][4]={{1,2,3,4},{5,6,8,9},{4,5,6,7},{10,11,12,13}}; //atleast column should  be written if row not
// for(int j=0; j<4; j++){
 
//     if(j%2==0){
//         cout<<" ";
//     for(int i=3; i>=0 ; i--){
//         cout<<a[i][j]<<" ";
//     }}

//    else{
//     cout<<" ";
//     for(int i=0; i<4 ; i++){
//         cout<<a[i][j]<<" ";
//     }}

/*rotate vector/image 90 deree anti clock wise*/
// vector<vector<int>> mat = {{0, 1, 2},{3, 4, 5},{6, 7, 8}};
// int n=mat.size();
//  for(int i=0; i<n; i++){
//      for(int j= 0 ;j<n-i; j++){
//         swap(mat[i][j], mat[(n-1)-j][(n-1)-i]);
//      }
//  }

// int x=0;
// while(x<n){
//     int s=0, t=n-1;
//     if(s<t){
//     swap(mat[x][s],mat[x][t]);
//     s++;
//     t--;
//     x++;}
// }

// for(int i=0; i<n; i++){
//      for(int j=0 ;j<n; j++){
//         cout<<mat[i][j]<<" ";
//      }
//      cout<<endl;
//  }

vector<vector<int>> mat = {{28, 96, 80, 84} ,{26, 40, 55 ,62} ,{68, 5 ,16, 84} ,{55, 81, 80, 25}};
int n=mat.size();
 for(int i=0; i<n; i++){
     for(int j= 0 ;j<n-i; j++){
        swap(mat[i][j], mat[(n-1)-j][(n-1)-i]);
     }
 }

int x=0; 
while(x<n){
    int s=0, t=n-1;
    while(s<t){
    swap(mat[x][s],mat[x][t]);
    s++;
    t--;}
    x++;
}


for(int i=0; i<n; i++){
     for(int j=0 ;j<n; j++){
        cout<<mat[i][j]<<" ";
     }
     cout<<endl;
 }




}