#include<iostream>
using namespace std;
class student{
public:
string name;         //Data set of object which is made in the main main function
int marks;
float gpa;

/*constructors of object inside class*/
student(){   //default constructor

}
student(string name, int marks, float  gpa){  //parameterised constructor
    this->name = name;
    this->marks = marks;  //this operator helps computer understand that this variable is class attribute(variable declared under class not variable declared under constructor). 
    this->gpa = gpa;
}

student(string n, float  g){
    name = n;
    gpa = g;
}

/*functions of object inside class whch can be declared outside the class also */
void print(int n){
    cout<<name<<" "<<marks<<" "<<gpa<<endl;
    cout<<n<<endl;
    //cout<<this->name<<" "<<this->marks<<" "<<this->gpa<<endl;
}
void change(){
marks= 86;
}

float percentage(){
    return (this->gpa)*9.5;
}

};
    
// void print(student &s){
//     cout<<s.name<<" "<<s.marks<<" "<<s.gpa<<endl;
// }
// void change(student&  s){
// s.marks= 86;
// }


int main(){

student s1("Himanshu",76,8.6);
//print(s1);
//change(s1);
s1.print(4);
cout<<s1.percentage()<<endl;
//print(s1);


student raghav("Raghav", 8.6);
raghav.marks=98;
raghav.print(3);
//print(raghav);
//change(raghav);
//print(raghav);

student s3;
s3.name="tanmay";
s3.marks= 100;
s3.gpa=10;
s3.print(6);
//print(s3);
//change(s3);
//print(s3);


}