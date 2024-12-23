#include<iostream>
using namespace std;

class Student{
    public:
            int roll;

           Student(int roll1){
              roll=roll1;
           } 
           void print(){
            cout<<roll<<endl;
           }
};

int main(){

    Student s1(100);
    s1.print();

    Student s2(s1);
    s2.print();

    return 0;
}