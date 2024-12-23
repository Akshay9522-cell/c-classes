#include<iostream>
using namespace std;
 
 class Car{
    public:
           string name;
           int model;
           float milaze;
           double price;

          
 };
  void print(Car c){
            cout<<"the name of car is:"<<c.name<<endl<<"of model number:"<<c.model<<endl<<"have milaze:"<<c.milaze<<"km/l"<<endl<<"price is:"<<c.price<<endl;
           }

int main(){

    Car c1;
    Car c2;
    c1.name="BMW";
    c1.model=2024;
    c1.milaze=23.5;
    c1.price=230000;


    c2.name="PORCHE";
    c2.model=2023;
    c2.milaze=17.5;
    c2.price=250000;
    

    print(c1);
    print(c2);

    return 0;
}