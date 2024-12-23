#include<iostream>
#include<string.h>
using namespace std;

class Student{

    public:
           char* c;
           Student(char* s){
             c=new char[20];
             strcpy(c,s);
           }
           Student(Student &obj){
             c=new char[20];
             strcpy(c,obj.c);
           }
           void show(){
            cout<< c;
           }

           void surname(char* s){
             strcat(c,s);
           }
};

int main(){
  
  Student s1("akshay");

  Student s2(s1);
  s2.show();
  s1.show();

  s2.surname("namdev");
  s1.show();
  s2.show();
    return 0;
}