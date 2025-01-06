// #include<iostream>
// using namespace std;

// class Animal{
//       public:
//             virtual void sound()=0;
// };

// class Cat:public Animal{
//       public:
//              void sound(){
//                 cout<<"meow meow"<<endl;
//              }
// };

// class Horse:public Animal{
//       public:
//              void sound(){
//                 cout<<"hehehe"<<endl;
//              }
// };


// int main(){

//     Animal *a;
//     Cat c;
//     Horse h;

//     a=&h;
//     a->sound();

// }


#include<iostream>
using namespace std;

class Vehicle{
    public:
          virtual void sound()=0;
};

class Car:public Vehicle{
      public:
            void sound(){
             cout<<"hmm hmm"<<endl;
            }
};

class Bicycle:public Vehicle{
      public:
            void sound(){
              cout<<"ring Ring"<<endl;
            }
};

class Aeroplane:public Vehicle{
      public:
            void sound(){
             cout<<"zooo zoooo";
            }
};

int main(){

    Vehicle *v;
    Car c;
    Bicycle b;
    Aeroplane a;

    v=&c;
    v->sound();
}