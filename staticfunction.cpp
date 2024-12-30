#include<iostream>
using namespace std;

class myClass{
    public:
           static int count ;

           static void increamentCount(){
             count++;
           }
           void print(){
            cout<<count;
           }
};

    int myClass::count=0;

int main(){

   myClass::increamentCount();
   myClass::increamentCount();
   myClass::increamentCount();
   myClass::increamentCount();

   myClass m1;
   m1.print();
}