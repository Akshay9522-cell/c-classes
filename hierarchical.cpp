#include<iostream>
using namespace std;

class Rbi{
    public:
           void rbi(){
            cout<<"RBI"<<endl;
           }
};
class Sbi:public Rbi{
    public:
          void sbi(){
            cout<<"SBI"<<endl;
          }
};

class Pnb:public Rbi{
    public:
          void pnb(){
            cout<<"PNB"<<endl;
          }
};

class Axis:public Rbi{
    public:
          void axis(){
            cout<<"AXIS"<<endl;
          }
};



int main(){

    Rbi r1;
    Axis a1;
    a1.axis();
    a1.rbi();

    // Sbi s1;
    // s1.rbi();
    // s1.sbi();

    // Pnb p1;
    // p1.pnb();
    // p1.rbi();

    return 0;
}