#include<iostream>
using namespace std;

class College{
    protected:
              void show(){
                cout<<"college"<<endl;
              }
};

class Student:public College{
        public:
              void msg(){
                cout<<"student";
                show();
              }
};

int main(){

    Student s;
    s.msg();

    return 0;
}