#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//only positive number
vector<int> arr(int base, float frac_part){
     vector<int> arr1;
    int count=0, safety_check=0;
    float f= frac_part;
    while(count<=1 && f!=0 && safety_check<20){
    int n1;
    f=base*f;
    n1=f;
    arr1.push_back(n1);
    safety_check+=1;
    f=f-n1;
    if(f<0) f*=-1;
    if(f==frac_part) count+=1;
    }

return arr1;
    }
    

int main(){
    vector<int> arr1;
    float n, frac_part;
    int int_part, base;
      cout<<"Enter the number : ";
    cin>>n;
    int_part= n ;
    frac_part= n - int_part;
      cout<<"Enter the base in which number has to be converted : ";
    cin>>base;
    while(int_part>0){
        arr1.push_back(int_part%base);
        int_part/=base;
    }
    reverse(arr1.begin(), arr1.end());
    vector<int> arr2 = arr(base, frac_part);
    cout<<"Converting decimal number "<<n<<" to"<<" base "<<base<<" : ";
    for(int digit:arr1){
        cout<<digit;
    }
    cout<<".";
    for(int digit:arr2){
        cout<<digit;
    }

}