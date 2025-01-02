#include<iostream>
using namespace std;

class Rbi{
    public:
          void show(){
            cout<<"rbi ";
          }
};

class Sbi:public Rbi{
    public:
          void display(){
            cout<<"SBI";
          }
         
};

int main(){
  Sbi s;
  s.display();
  s.show();

}