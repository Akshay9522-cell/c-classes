#include<iostream>
using namespace std;

class Parent{
    int x;

    public:
          Parent(int value):x(value){}

          Parent operator+(const Parent &p){
             return Parent(x+ p.x);
          }
          void print(){
            cout<<x;
          }
};

int main(){

    Parent p(6);
    Parent p1(5);

    Parent p3=p+p1;
    p3.print();
}