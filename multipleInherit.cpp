#include<iostream>
using namespace std;

class Parent{
    public:
           void parentshow(){
            cout<<"i am parent"<<endl;
           }
};

class Child{
    public:
           void childshow(){
            cout<<"i am child"<<endl;
           }
};

class Grandfather:public Parent,public Child{
       
       public:
              void GF(){
                cout<<"i am grandfather";
              }
};

int main(){

 Grandfather g1;
   g1.childshow();
  g1.parentshow();
 
  g1.GF();
   
}