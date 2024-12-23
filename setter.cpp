#include<iostream>
using namespace std;

class Student{

    private:
           string name;

    public:
           void setter(string name1){
            name=name1;
           }

           void print(){
            cout<<name;
           }
                  
};
int main(){
    Student s1;
    s1.setter("akshay");
    s1.print();

    return  0;
}