#include<iostream>
using namespace std;
class Student{
public:
string name;
// float marks;
int rno;
Student(){

}
Student( string name, float marks, int rno){
    this->marks = marks;
    this->name = name;
    this->rno = rno;
}
void print(){
    cout<<name<<" "<<rno<<" "<<marks<<endl;
}

/*used setter to set marks as we cannot do it directly*/
void setmarks(float m){
    marks=m;
}

/*used getter to get marks as we cannot directy access marks beacause it is private only function in class can access it*/
void getmarks(){     //we can also use return function type and use int instead of void 
    cout<<marks<<endl;
}

private:
float marks;


};

int main(){
    Student s1("Raghav Garg",92.2,76);
    s1.getmarks();
    s1.setmarks(90);
    s1.print();

Student s2;
s2.name="Rahul";
s2.rno=82;
s2.print();
s2.getmarks();
s2.setmarks(92.7);
s2.getmarks();
s2.print();

}