#include<iostream>
using namespace std;

class Rbi{
    public:
          void rbi(){
            cout<<"rbi"<<endl;
          }
};

class Axis: virtual public Rbi{
    public:
          void axis(){
            cout<<"axis";
           }
};
class Sbi: virtual public Rbi{
    public:
           void sbi(){
            cout<<"sbi";
           }
};

class Customer:public Axis,public Sbi{
         public:
                void cst(){
                    cout<<"cst";
                }
};

int main(){

    Customer c;
    c.rbi();
}