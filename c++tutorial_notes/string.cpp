#include<iostream>
#include<algorithm>
using namespace std;
int main(){

    /*calculating no. of vowels in the string*/
// string s= "--dbgExe=C:/msys64/mingw64/bin/gdb.exeRURCBJDCPSMP;LA,DCSYDIK" ;
// cout<<s<<endl;
// int count=0;
// for(int i=0; i<s.length(); i++){
//     if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
//             count+=1;
//     }
// }
// cout<<"No. of vowels in this string is : "<<count;

/*replacing all even index places with a*/
// string s="A cow has four legs ";
// cout<<s<<endl;
// for(int i=0; i<s.length(); i++){
//     if(i%2==0){
//         s[i]='a';
//     }
// }
// cout<<s<<endl;

/*push-back,popback and append function*/

// string s="strin";
// s.push_back('g');//to put only one character after the string
// cout<<s<<endl;
// s.append(" in built function");//we can add more than one characters in string
// cout<<s<<endl;
// string s2="abcde";
// cout<<s2<<endl;
// s2.pop_back();//to substract the last character
// cout<<s2;

/*length of string and clear function*/
// string s= "Hello world!";
// cout<<"string : "<<s<<endl<<"length of string : "<<s.length()<<endl;
// //after s.clear :
// s.clear();
// cout<<"string : "<<s<<endl<<"length of string : "<<s.length();

/*plus operator*/
// string s= "Hello";
// cout<<s<<endl;
// s=s+" world!";
// cout<<s<<endl;
// s="Everyone "+s;
// cout<<s;

/*reverse operator*/
// string s ="Hello world!";
// cout<<s<<" "<<s.length()<<endl;
// reverse(s.begin(),s.begin()+s.length()/2);
// cout<<s<<" "<<s.length()<<endl;
// string s2="olleH";
// cout<<s2<<endl;
// reverse(s2.begin(),s2.end());
// cout<<s2<<" "<<endl;
// string s3="project";
// cout<<s3<<endl;
// reverse(s3.begin()+1,s3.begin()+3);//reversing from position 2 to 5(remember the cursor stops before the end parameter we input so if we put position 2 in end it will stop at position 1 , this applies except s.end)
// cout<<s3<<endl;

/*to_string function*/
// int x=5289949;
// string s= to_istring(x);
// cout<<"number : "<<s<<endl<<"digits of the number is : "<<s.length();

/*string to integer conversion (stoi)*/
// string str = "1234";
// int x = stoi(str);
// cout<<x<<endl<<x+1;



}