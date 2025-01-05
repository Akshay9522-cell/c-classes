#include<iostream>
using namespace std;

class Rbi{
    public:
           void rbi(){
            cout<<"RBI"<<endl;
           }
};
class Sbi: virtual public Rbi{
    public:
          void sbi(){
            cout<<"SBI"<<endl;
          }
};

class Pnb: virtual public Rbi{
    public:
          void pnb(){
            cout<<"PNB"<<endl;
          }
};

class Axis:public Sbi,public Pnb{
    public:
          void axis(){
            cout<<"AXIS"<<endl;
          }
};





int main(){

    Axis a1;
    a1.rbi();

    return 0;
}