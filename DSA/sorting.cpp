#include<iostream>
#include<vector>
using namespace std;
int main(){

    // /*Bubble sort in reverse order with no. of swaps*/
    // vector<int> arr= {4,3,22,5,6,2};
    // int swaps=0;
    // for(int i=0; i<arr.size()-1; i++){ 
    //     for(int j=0; j<arr.size()-1-i; j++){
    //         if(arr[j]<arr[j+1]) swap(arr[j], arr[j+1]) ;
    //         swaps++;
    //     }
    //     if (swaps==0) break; 
    // }

    // for(int ele:arr){
    //     cout<<ele<<" ";
    // }
    // cout<<endl<<swaps;

    /*zeroes to the right keeping order same*/
    // vector<int> arr= {4,3,0,22,0,5,0,6,2};
    // int swaps=0;
    // for(int i=0; i<arr.size()-1; i++){ 
    //     for(int j=0; j<arr.size()-1-i; j++){
    //         if(arr[j]==0) swap(arr[j], arr[j+1]) ;
    //         swaps++;
    //     }
    //     if (swaps==0) break; 
    // }

    // for(int ele:arr){
    //     cout<<ele<<" ";
    // }
    // cout<<endl<<swaps;

    /*selection sort*/
    /*Bubble sort in reverse order with no. of swaps*/
    vector<int> arr= {4,3,22,5,6,2};
    int min=arr[0];
    for(int i=0; i<arr.size()-1; i++){ 
        for(int j=0; j<arr.size(); j++){
            if(arr[j]<min) swap(min, arr[j]);
    }
        min++; 
    }

    for(int ele:arr){
        cout<<ele<<" ";
    }


}