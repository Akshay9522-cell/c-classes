#include<iostream>
using namespace std;

class Cricketer{

    public:
           string name;
           int age;


     Cricketer(string name,int age){
               this->name=name;
               this->age=age;
     }
        
};
  void print (Cricketer c){
             cout<<c.name<<c.age;
          }


int main(){

 Cricketer c1("Rohit sharma",45);
   Cricketer* p=&c1;

   cout<<p->name;
   cout<<p->age;

   p->name="virat";
   cout<<p->name;

 
    return 0;
}