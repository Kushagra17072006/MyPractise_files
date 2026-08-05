#include<iostream>
using namespace std;
class Cricketer{
public:
string name;
int score;
float avg;

Cricketer (){

}
Cricketer(string n, int s, float a){
    name=n;
    score= s;
    avg=a;
}

void print(){
    cout<<name<<" "<<score<<" "<<avg<<" "<<matches()<<endl;
}

int matches(){
    return score/avg;
}

};


void change(Cricketer* c){
c->avg=77.8;  //this means (*c).avg=77.8;
}

int main(){

Cricketer  c1("Virat Kohli", 25000, 57.5);
Cricketer c2("Rohit Sharma", 18000, 47.8);
c1.print();
c2.print();
Cricketer* p1=&c1;
change(p1);
c1.print();



}