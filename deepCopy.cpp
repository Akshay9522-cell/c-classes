#include<iostream>
using namespace std;

class Parent{
    public:
           int *ptr;

           Parent(){
            ptr=new int(15);
           }

           Parent(const Parent &other){
               ptr=new int(*other.ptr);
           }
           void show(){
            cout<<*ptr<<endl;
           }
};
int main(){
  Parent p1;
  Parent p2(p1);

  p1.show();
  p2.show();

  *p1.ptr=35;

   p1.show();
  p2.show();
    return 0;
}