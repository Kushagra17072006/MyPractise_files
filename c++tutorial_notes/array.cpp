#include<iostream>
using namespace std;

int main(){

/*calculating multiplication of all elements in array*/
// int arr[6]={1,2,3,4,5,6};
// int multi=1;
// int n=sizeof(arr)/4;     //sizeof is an operator which tells the size of array in memmory as each integer cover 4 bytes of the memory by dividing by 4 we can know the nummber of elements in the array
// cout<<n<<endl;
// for(int i=0;i<=n-1; i++){
//     multi*=arr[i];
// }
// cout<<multi;
//similarly we can also calculate addition of all elements in array 

/*user dependent input*/
// int arr[3];
// for(int i=0; i<=2;i++){
//     cout<<"Enter "<<i<<" element : ";
//     cin>>arr[i];
// }
// int multi=1;
// int n=sizeof(arr)/4;     //sizeof is an operator which tells the size of array in memmory as each integer cover 4 bytes of the memory by dividing by 4 we can know the nummber of elements in the array
// cout<<"no. of elements in array : "<<n<<endl;
// for(int i=0;i<=n-1; i++){
//     multi*=arr[i];
// }
// cout<<multi;


/*maximum value in array*/
// int arr[6];
// for(int i=0; i<=5;i++){
//     cout<<"Enter "<<i<<" element : ";
//     cin>>arr[i];
// }
// int mx=arr[0];
// int n=sizeof(arr)/4;     //sizeof is an operator which tells the size of array in memmory as each integer cover 4 bytes of the memory by dividing by 4 we can know the nummber of elements in the array
// cout<<"no. of elements in array : "<<n<<endl;
// for(int i=0;i<=n-1; i++){
//   //if(mx<arr[i]) mx=arr[i];
//   mx=max(mx,arr[i]);
// }
// cout<<mx;

/*minimum value in array*/
// int arr[6];
// for(int i=0; i<=5;i++){
//     cout<<"Enter "<<i<<" element : ";
//     cin>>arr[i];
// }
// int mn=INT_MAX;//arr[0] can also be given like previous method but intmax stores the lowes integer value an integer can store
// int n=sizeof(arr)/4;     //sizeof is an operator which tells the size of array in memmory as each integer cover 4 bytes of the memory by dividing by 4 we can know the nummber of elements in the array
// cout<<"no. of elements in array : "<<n<<endl;
// for(int i=0;i<=n-1; i++){
//   //if(mn>arr[i]) mn=arr[i];
//   mn=min(mn,arr[i]);
// }
// cout<<mn;


// int size,n=0;
// cout<<"Enter the number till squares you want : ";
// cin>>size;
// int arr[size];
// for(int i=0; i<=size-1;i++){
// arr[i-1]=i*i;
// }
// cout<<"square of natural num till "<<size<<endl;
// for(int i=0;i<=size-1;i++){
// cout<<arr[i]<<" ";
// }


/*Add even index number with 10 and multiply odd index number with 2 in array*/
    // int n;
    // cout << "Enter element count: ";
    // cin >> n;

    // int arr[n];

    // // Fill with natural numbers
    // for (int i = 0; i < n; i++) {
    //     arr[i] = i + 1;
    // }

    // // Transform based on index parity
    // for (int i = 0; i < n; i++) {
    //     if (i % 2 == 0) arr[i] = arr[i] + 10;  // even index
    //     else arr[i] = arr[i] * 2;              // odd index
    // }

    // // Print result
    // for (int i = 0; i < n; i++) {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    // return 0;

    /*difference between sum of elements in even indices and sum of elements in odd indices*/
    // int n;
    // cout<<"Enter n : ";
    // cin>>n;
    // int arr[n];
    // for(int i=0; i<=n-1; i++){
    //     cout<<"enter "<<i<<" element : ";
    //     cin>>arr[i];
    // }
    // int s1=0, s2=0;
    // for(int i=0; i<=n-1; i++){
        
    //     if(i%2==0) s1+=arr[i];
    //     else s2+=arr[i];
    // }
    // cout<<s1-s2;

    /*second largest element in array*/
    // int n;
    // cout<<"Enter size of array : ";
    // cin>>n;
    // int arr[n];//you can also input elements in array before instead icluding manually later aftr execution 
    // int mx=INT_MIN, smx=INT_MIN;
    // for(int i=0; i<n; i++){
    //     cout<<"Enter "<<i<<" number : ";
    //     cin>>arr[i];
    // }
    // for(int i=0; i<n ; i++){
    //     mx=max(mx,arr[i]);
    // }
    // for(int i=0; i<n ;i++){
    //     if(arr[i]!=mx) smx=max(smx,arr[i]);
    // }
    // cout<<"First largest element in array is : "<<mx<<endl;
    // cout<<"Second largest element in array is : "<<smx<<endl;


    //copying the content of one array in another in reverse order
    // int n;
    // cout<<"Enter size of array : ";
    // cin>>n;
    // int arr[n];
    // int s[n];
    // for(int i=0 ; i<=n-1 ; i++){
    //     cout<<"Enter "<<i<<" element: ";
    //     cin>>arr[i];
    // }
    // for(int i=n-1 ; i>=0 ; i--){
    //     s[n-1-i]=arr[i];
    // }
    // for(int i=0 ; i<=n-1 ; i++){
    //     cout<<s[i]<<" ";
    // }


/*reversing array*/
//     int n;
//     cout<<"Enter size of array : ";
//     cin>>n;
//     int arr[n];
   
//     for(int i=0 ; i<=n-1 ; i++){
//         cout<<"Enter "<<i<<" element: ";
//         cin>>arr[i];
//     }
//     cout<<"input before reversing array : ";
//     for(int i=0 ; i<n ; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     int i=0, j = n-1;
//     while(i<j){
//         int temp = arr[i];
//         arr[i]=arr[j];
//         arr[j]=temp;
//         i++;
//         j--;
//     }
// cout<<"input before reversing array : ";
//     for(int i=0 ; i<n ; i++){
//         cout<<arr[i]<<" ";
//     }

/*checking if the array is pallindrome*/
// int n;
// cout<<"Enter size of array : ";
// cin>>n;
// int arr[n];

// for(int i=0; i<n ; i++){
//     cout<<"Enter "<<i<<" element : ";
//     cin>>arr[i];
// }
// int i=0,j=n-1,m=0;
// while(i<j){
// if(arr[i]!=arr[j]) {
//     m++;}

// i++;
// j--;
// }
// if(m==0){
// cout<<"array is pallindrome";
// }
// else{cout<<"array is not pallindrrome";}


  
}