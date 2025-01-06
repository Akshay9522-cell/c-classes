#include<iostream>
using namespace std;

 class Vehicle{
    public:
        virtual void speedUp()=0;
 };

 class Car:public Vehicle{
    public:
       void speedUp(){
         cout<<220<<"kmh"<<endl;
       }
 };


int main(){

    Vehicle *v;
    Car c;
    v=&c;
    v->speedUp();
}